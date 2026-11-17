# Saint Alban's Anglican Church — website clone preview

This repository generates a static preview of the current church website using C++17.
It is separate from the church's currently hosted production site, and **does not change DNS or email**.

## Goal

Reproduce the existing public website, **not** redesign it: charcoal navigation, Saint Alban's logo, full-bleed church photograph, Sunday service lettering, the seven original navigation items, four partner links, call button, and existing page structure and contact details.

The logo and the homepage photograph in \`assets/\` are **temporary lower-resolution crops from screenshots supplied for comparison**. They must be replaced with the original full-resolution files before the hosting service is cancelled. The first draft of the internal pages still contains shortened summaries; content and layouts need a page-by-page visual comparison against the original.

The original online contact form cannot operate on static hosting without a form service. The preview currently keeps a direct email link instead; do not claim the form is migrated.

## Build

Run \`make check\`. C++17 builds the static pages; GitHub Actions publishes the generated \`public/\` directory to the preview URL.

Do not set a custom domain or edit the church's DNS until the replacement has been approved and a working contact form, assets and content are verified.

## Original-source fidelity pass — 17 November 2026

The homepage HTML obtained from the currently hosted builder identifies the platform as Dotster / `mywebsitebuilder.com`, provides exact source URLs for the church logo and main photograph, identifies **Roboto Condensed** headings and **Cabin** body text, and includes the actual navigation / footer link destinations. The preview now loads those two images from their original builder CDN instead of showing the screenshot crops and restores the red Sunday lettering as live HTML text.

**Temporary dependency:** Both images still point to the old hosting provider. They must be downloaded to `assets/` and referenced locally before cancelling that provider. Other pages still require their original HTML and photographs for a genuinely accurate clone. The existing domain and email remain unchanged.
