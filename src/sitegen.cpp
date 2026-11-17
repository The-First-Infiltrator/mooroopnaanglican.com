// Saint Alban's Anglican Church, Mooroopna — deterministic C++17 site generator.
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>
namespace fs = std::filesystem;
struct Page { std::string path, name, heading, intro, content; };
const std::vector<std::pair<std::string,std::string>> menu = {
  {"index.html","Home"},{"our-story.html","Our Story"},{"saint-alban.html","Saint Alban"},
  {"ministries.html","Ministries"},{"team.html","Team"},{"news.html","News"},
  {"contact.html","Contact"}};
std::vector<Page> pages() {
  return {
    {"index.html","Home","Welcome to Saint Alban's","Radical hospitality · Sacrificial generosity · Holding fast to Jesus",
R"HTM(
<section class="feature"><div><p class="eyebrow">Join us on Sundays</p><h2>Worship together</h2><p>Whether you are a regular churchgoer or simply curious, you are welcome.</p></div><div class="times"><div><small>Morning service</small><strong>9:30 am</strong></div><div><small>Evening service</small><strong>5:00 pm</strong></div></div></section>
<section><p class="eyebrow">A church in Mooroopna</p><h2>Faith, friendship and community.</h2><p>Saint Alban's has been part of Mooroopna since 1878. We gather for worship, share life, and make room for people exploring the Christian faith.</p><div class="cards three"><a href="our-story.html"><h3>Our story</h3><p>The history and values of our parish.</p><b>Discover more →</b></a><a href="ministries.html"><h3>Life together</h3><p>Children, young people, music, prayer and community activities.</p><b>Explore ministries →</b></a><a href="contact.html"><h3>Come and say hello</h3><p>Find our services and contact details.</p><b>Plan a visit →</b></a></div></section>
<section class="banner"><div><h2>9–17 Young Street, Mooroopna.</h2><p>There's a place for you here.</p></div><a class="button" href="contact.html">Contact us →</a></section>
)HTM"},
    {"our-story.html","Our Story","Our story","A local congregation with a long history and an open door.",
R"HTM(
<section class="reading"><p>Anglican worship has been part of Mooroopna since 1878. Today, Saint Alban's is at home in buildings that have served as an Ardmona factory workers' canteen and one of Mooroopna's post offices.</p><p>We seek to offer hospitality, practical generosity and a place to explore faith in Jesus. We share our location with community organisations doing important work.</p><h2>Our community connections</h2><p>These include Family Haven, Orange Sky and Teen Challenge.</p><div class="links"><a href="https://www.gslp.com.au/programs/family-haven-mooroopna/">Family Haven</a><a href="https://orangesky.org.au/">Orange Sky</a><a href="https://www.teenchallenge.com.au/">Teen Challenge</a></div></section>
)HTM"},
    {"saint-alban.html","Saint Alban","The story of Saint Alban","An early Christian remembered for courage and generosity.",
R"HTM(
<section class="reading"><p>Saint Alban lived in Roman Britain and is traditionally remembered as Britain's first Christian martyr. His story tells of offering refuge to a persecuted Christian priest, then placing himself in danger to protect his guest.</p><p>It is a story that continues to inspire how our congregation seeks to serve Mooroopna.</p><div class="cards three"><article><h3>Radical hospitality</h3><p>Making room for others.</p></article><article><h3>Sacrificial generosity</h3><p>Giving practical care to our neighbours.</p></article><article><h3>Holding fast to Jesus</h3><p>Living out our Christian faith.</p></article></div><p>Read the <a href="https://www.stalbanscathedral.org/the-story-of-alban">historical account from St Albans Cathedral</a>.</p></section>
)HTM"},
    {"ministries.html","Ministries","Life together","Find a place to connect, learn, help and belong.",
R"HTM(
<section class="cards two">
<article><p class="eyebrow">Children</p><h3>M.A.C.Ks</h3><p>Mooroopna Anglican Church Kids meets during the 5 pm Sunday service in school terms, including a creche for younger children.</p></article>
<article><p class="eyebrow">Prayer</p><h3>Prayer at the Canteen</h3><p>Fridays, noon to 1 pm.</p></article>
<article><p class="eyebrow">Learning</p><h3>Bible studies</h3><p>Groups meet during school terms on Mondays and Tuesdays. Contact the parish for details.</p></article>
<article><p class="eyebrow">Community</p><h3>Gardening group</h3><p>Usually the last Friday of the month, combining gardening, conversation and a cuppa.</p></article>
<article><p class="eyebrow">Music</p><h3>Ukulele group</h3><p>Fridays at 5 pm during school terms; beginners welcome.</p></article>
<article><p class="eyebrow">Youth</p><h3>Youth group</h3><p>Fortnightly in school terms, with activities and food.</p></article>
<article><p class="eyebrow">Giving</p><h3>Monster garage sale</h3><p>An annual fundraiser supporting charitable and mission organisations.</p></article>
<article><p class="eyebrow">Fellowship</p><h3>Bloke's Bible Bash</h3><p>Tuesday evening Bible gathering. Contact Simon for details.</p></article>
</section><p class="note">Please confirm meeting details with the parish before attending; times may change.</p>
)HTM"},
    {"team.html","Team","Our parish team","Meet the people serving our congregation.",
R"HTM(
<section class="cards two"><article><p class="eyebrow">Rector</p><h3>The Rev'd Simon Rip Robinson</h3><p>For questions about the parish, please contact the church.</p></article><article><p class="eyebrow">Parish Assistant</p><h3>The Rev'd Karlie McGrath</h3><p>Part of the Saint Alban's ministry team.</p></article></section>
<section class="banner"><div><h2>We'd love to hear from you.</h2><p>Questions about visiting, worship or activities?</p></div><a class="button" href="contact.html">Get in touch →</a></section>
)HTM"},
    {"news.html","News","News and notices","Updates from the Saint Alban's community.",
R"HTM(
<section class="reading"><article class="notice"><p class="eyebrow">Preview website</p><h2>Parish notices</h2><p>News and current announcements are not yet migrated to this preview. Please contact the church for the latest information.</p><a href="contact.html">Church contact details →</a></article></section>
)HTM"},
    {"contact.html","Contact","Come and say hello","Questions or planning your first visit? We'd be glad to hear from you.",
R"HTM(
<section class="cards two"><article><p class="eyebrow">Visit us</p><h2>Saint Alban's Anglican Church</h2><p>9–17 Young Street<br>Mooroopna VIC 3629<br>Australia</p><p><strong>Postal address</strong><br>PO Box 379<br>Mooroopna VIC 3629</p></article>
<article><p class="eyebrow">Get in touch</p><h2>Contact the parish</h2><p><a href="tel:+61358252031">(03) 5825 2031</a></p><p><a href="mailto:simon@mooroopnaanglican.com">simon@mooroopnaanglican.com</a></p><a class="button dark" href="mailto:simon@mooroopnaanglican.com?subject=Church%20website%20enquiry">Email us →</a></article></section>
<section><p class="eyebrow">Sunday services</p><h2>9:30 am &amp; 5:00 pm</h2><p>Everyone is welcome.</p></section>
<p class="note">This preview uses a direct email link. The previous site's message form is not active here yet.</p>
)HTM"}
  };
}
std::string make_html(const Page& p) {
  const bool is_home = p.path == "index.html";
  std::string html = R"HTM(<!doctype html><html lang="en-AU"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><meta name="theme-color" content="#2b2f31"><meta name="description" content="Saint Alban's Anglican Church, Mooroopna. Sunday services at 9:30am and 5pm."><link rel="stylesheet" href="assets/site.css"><title>)HTM";
  html += p.name + " - Saint Alban's Anglican Church</title></head><body class=\"";
  html += is_home ? "home" : "interior";
  html += R"HTM("><a class="skip" href="#main">Skip to content</a><header class="site-header"><div class="header-inner"><a class="brand" href="index.html" aria-label="Saint Alban's Anglican Church home"><img src="https://images.builderservices.io/s/cdn/v1.0/i/m?url=https%3A%2F%2Fstorage.googleapis.com%2Fproduction-dotster-v1-0-8%2F898%2F1624898%2FaEgoU8tH%2F8ab185272c1c4bf893969645e8657c7e&amp;methods=resize%2C500%2C5000" alt="Saint Alban's at the Canteen logo" width="64" height="64"></a><nav class="site-nav" aria-label="Main navigation">)HTM";
  for (const auto& item : menu) {
    html += "<a href=\"" + item.first + "\"";
    if (p.path == item.first) html += " aria-current=\"page\"";
    html += ">" + item.second + "</a>";
  }
  html += R"HTM(<a href="https://www.bendigoanglican.org.au/">Anglican Diocese of Bendigo</a><a href="https://www.gslp.com.au/programs/family-haven-mooroopna/">Family Haven</a><a href="https://www.teenchallenge.com.au/">Teen Challenge</a><a href="https://orangesky.org.au/">Orange Sky</a><a class="call" href="tel:+61358252031">Call</a></nav></div></header><main id="main">)HTM";
  if (is_home) {
    html += R"HTM(<section class="photo-hero" aria-label="Saint Alban's church building"><h1 class="visually-hidden">Saint Alban's Anglican Church, Mooroopna</h1><h2 class="service-heading">Sundays 9.30am &amp;<span>5pm</span></h2></section>)HTM";
  } else {
    html += "<div class=\"page-body\"><div class=\"content\">";
    html += "<h1 class=\"page-title\">" + p.heading + "</h1>";
    if (p.path == "team.html") html += "<p class=\"team-motto\">Radical Hospitality - Sacrificial Generosity - Holding fast to Jesus</p>";
    if (p.path != "news.html") html += p.content;
    html += "</div></div>";
  }
  html += R"HTM(</main><footer class="site-footer"><div class="footer-inner"><h2>Saint Alban's Anglican Church</h2><nav class="footer-nav" aria-label="Footer navigation">)HTM";
  for (const auto& item : menu) html += "<a href=\"" + item.first + "\">" + item.second + "</a>";
  html += R"HTM(<a href="https://www.bendigoanglican.org.au/">Anglican Diocese of Bendigo</a><a href="https://www.gslp.com.au/programs/family-haven-mooroopna/">Family Haven</a><a href="https://www.teenchallenge.com.au/">Teen Challenge</a><a href="https://orangesky.org.au/">Orange Sky</a></nav><section class="footer-contact"><h3>Address</h3><p>9 - 17 Young St<br>Mooroopna 3629, AU</p><p><a href="tel:+61358252031">(03) 5825 2031</a> <a href="mailto:simon@mooroopnaanglican.com">simon@mooroopnaanglican.com</a></p></section><p class="copyright">© 2026 Saint Alban's Anglican Church</p></div></footer></body></html>)HTM";
  return html;
}
int main(int argc,char** argv) {
  try {
    if (argc!=2) throw std::runtime_error("usage: sitegen OUTPUT_DIRECTORY");
    fs::path root(argv[1]); fs::create_directories(root);
    for (const auto& page:pages()) {
      std::ofstream f(root/page.path,std::ios::binary|std::ios::trunc);
      if(!f) throw std::runtime_error("Cannot write "+page.path);
      f<<make_html(page);
      if(!f) throw std::runtime_error("Failed writing "+page.path);
      std::cout<<"Generated "<<page.path<<'\n';
    }
  } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
  return 0;
}
