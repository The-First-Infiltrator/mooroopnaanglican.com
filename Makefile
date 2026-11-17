CXX ?= g++
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra -Wpedantic
PAGES := index.html our-story.html saint-alban.html ministries.html team.html news.html contact.html
.PHONY: all site check clean
all: build/sitegen
build/sitegen: src/sitegen.cpp
	mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ $<
site: build/sitegen
	rm -rf public
	./build/sitegen public
	mkdir -p public/assets
	cp assets/site.css public/assets/site.css
check: site
	@set -eu; for page in $(PAGES); do test -s "public/$$page"; done
	@test -s public/assets/site.css
	@grep -q '9:30 am' public/index.html
	@echo 'All seven generated pages verified'
clean:
	rm -rf build public
