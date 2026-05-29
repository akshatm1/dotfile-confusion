static const char norm_fg[] = "#c0d0e0";
static const char norm_bg[] = "#0a0a11";
static const char norm_border[] = "#86919c";

static const char sel_fg[] = "#c0d0e0";
static const char sel_bg[] = "#525569";
static const char sel_border[] = "#c0d0e0";

static const char urg_fg[] = "#c0d0e0";
static const char urg_bg[] = "#444659";
static const char urg_border[] = "#444659";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
