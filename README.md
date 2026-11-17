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
