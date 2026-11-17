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
	cp assets/saint-albans-logo.webp assets/church-building-preview.webp public/assets/
check: site
	@set -eu; for page in $(PAGES); do test -s "public/$$page"; done
	@test -s public/assets/site.css
	@grep -q '9.30am' public/index.html
	@grep -q '8ab185272c1c4bf893969645e8657c7e' public/index.html
	@grep -q '8d2d717d93c94bf98dea53a1b1d94a2b' public/assets/site.css
	@grep -q 'class="service-heading"' public/index.html
	@grep -q 'Sundays 9.30am &amp;' public/index.html
	@grep -q 'position:absolute;top:0;left:0' public/assets/site.css
	@grep -q "is-scrolled" public/index.html
	@grep -q "background-position:center center" public/assets/site.css
	@echo 'All seven generated pages verified'
clean:
	rm -rf build public
