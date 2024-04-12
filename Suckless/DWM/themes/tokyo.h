
static char c000000[] = "#bc7ad9"; // placeholder value

static char normfgcolor[] = "#0cfcf5";
static char normbgcolor[] = "#15161E";
static char normbordercolor[] = "#1a1b26";
static char normfloatcolor[] = "#15161E";

static char selfgcolor[] = "#0f0f0f";
static char selbgcolor[] = "#9412d7";
static char selbordercolor[] = "#7aa2f7";
static char selfloatcolor[] = "#7aa2f7";

static char titlenormfgcolor[] = "#39Fa15";
static char titlenormbgcolor[] = "#15161E";
static char titlenormbordercolor[] = "#1a1b26";
static char titlenormfloatcolor[] = "#15161E";

static char titleselfgcolor[] = "#9ece6a";
static char titleselbgcolor[] = "#15161E";
static char titleselbordercolor[] = "#15161E";
static char titleselfloatcolor[] = "#7aa2f7";

static char tagsnormfgcolor[] = "#c0caf5";
static char tagsnormbgcolor[] = "#15161E";
static char tagsnormbordercolor[] = "#1a1b26";
static char tagsnormfloatcolor[] = "#15161E";

static char tagsselfgcolor[] = "#7dcfff";
static char tagsselbgcolor[] = "#1a1b26";
static char tagsselbordercolor[] = "#7dcfff";
static char tagsselfloatcolor[] = "#7dcfff";

static char hidnormfgcolor[] = "#f7768e";
static char hidselfgcolor[] = "#7dcfff";
static char hidnormbgcolor[] = "#15161E";
static char hidselbgcolor[] = "#15161E";

static char urgfgcolor[] = "#c0caf5";
static char urgbgcolor[] = "#15161E";
static char urgbordercolor[] = "#6bb2c0";
static char urgfloatcolor[] = "#15161E";
#if RENAMED_SCRATCHPADS_PATCH
static char scratchselfgcolor[]          = "#FFF7D4";
static char scratchselbgcolor[]          = "#77547E";
static char scratchselbordercolor[]      = "#894B9F";
static char scratchselfloatcolor[]       = "#894B9F";

static char scratchnormfgcolor[]         = "#FFF7D4";
static char scratchnormbgcolor[]         = "#664C67";
static char scratchnormbordercolor[]     = "#77547E";
static char scratchnormfloatcolor[]      = "#77547E";
#endif // RENAMED_SCRATCHPADS_PATCH

#if BAR_FLEXWINTITLE_PATCH
static char normTTBbgcolor[]             = "#330000";
static char normLTRbgcolor[]             = "#330033";
static char normMONObgcolor[]            = "#000033";
static char normGRIDbgcolor[]            = "#003300";
static char normGRD1bgcolor[]            = "#003300";
static char normGRD2bgcolor[]            = "#003300";
static char normGRDMbgcolor[]            = "#506600";
static char normHGRDbgcolor[]            = "#b96600";
static char normDWDLbgcolor[]            = "#003333";
static char normSPRLbgcolor[]            = "#333300";
static char normfloatbgcolor[]           = "#115577";
static char actTTBbgcolor[]              = "#440000";
static char actLTRbgcolor[]              = "#440044";
static char actMONObgcolor[]             = "#000044";
static char actGRIDbgcolor[]             = "#004400";
static char actGRD1bgcolor[]             = "#004400";
static char actGRD2bgcolor[]             = "#004400";
static char actGRDMbgcolor[]             = "#507711";
static char actHGRDbgcolor[]             = "#b97711";
static char actDWDLbgcolor[]             = "#004444";
static char actSPRLbgcolor[]             = "#444400";
static char actfloatbgcolor[]            = "#116688";
static char selTTBbgcolor[]              = "#550000";
static char selLTRbgcolor[]              = "#550055";
static char selMONObgcolor[]             = "#212171";
static char selGRIDbgcolor[]             = "#005500";
static char selGRD1bgcolor[]             = "#005500";
static char selGRD2bgcolor[]             = "#005500";
static char selGRDMbgcolor[]             = "#508822";
static char selHGRDbgcolor[]             = "#b98822";
static char selDWDLbgcolor[]             = "#005555";
static char selSPRLbgcolor[]             = "#555500";
static char selfloatbgcolor[]            = "#117799";
#endif // BAR_FLEXWINTITLE_PATCH

#if BAR_ALPHA_PATCH
static const unsigned int baralpha = 0xf0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3] = {
	/*                       fg      bg        border     */
	[SchemeNorm]         = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]          = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleNorm]    = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleSel]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsNorm]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsSel]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidNorm]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidSel]       = { OPAQUE, baralpha, borderalpha },
	[SchemeUrg]          = { OPAQUE, baralpha, borderalpha },
	#if RENAMED_SCRATCHPADS_PATCH
	[SchemeScratchSel]  = { OPAQUE, baralpha, borderalpha },
	[SchemeScratchNorm] = { OPAQUE, baralpha, borderalpha },
	#endif // RENAMED_SCRATCHPADS_PATCH
	#if BAR_FLEXWINTITLE_PATCH
	[SchemeFlexActTTB]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActLTR]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActMONO]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActGRID]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActGRD1]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActGRD2]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActGRDM]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActHGRD]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActDWDL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActSPRL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexActFloat] = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaTTB]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaLTR]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaMONO]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaGRID]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaGRD1]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaGRD2]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaGRDM]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaHGRD]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaDWDL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaSPRL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaFloat] = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelTTB]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelLTR]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelMONO]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRID]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRD1]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRD2]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRDM]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelHGRD]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelDWDL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelSPRL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelFloat] = { OPAQUE, baralpha, borderalpha },
	#endif // BAR_FLEXWINTITLE_PATCH
};
#endif // BAR_ALPHA_PATCH

// static char *statuscolors[][ColCount] = {
// 	/*                       fg                bg                border
// float */ 	[SchemeNorm]         = { "#f7768e",        normbgcolor,
// normbordercolor,      normfloatcolor }, 	[SchemeSel]          = {
// "#e0af68", normbordercolor,		selbordercolor,       selfloatcolor },
// 	[SchemeTitleNorm]    = { "#7dcfff",        normbgcolor,
// titlenormbordercolor, titlenormfloatcolor }, 	[SchemeTitleSel]     = {
// "#a9b1d6",        normbordercolor,		titleselbordercolor,
// titleselfloatcolor }, 	[SchemeTagsNorm]     = { "#ebcb8d", normbgcolor,
// tagsnormbordercolor,  tagsnormfloatcolor }, 	[SchemeTagsSel]      = {
// "#bb9af7",        normbordercolor,		tagsselbordercolor,
// tagsselfloatcolor }, 	[SchemeHidNorm]      = { "#c0caf5", normbgcolor,
// c000000,              c000000 }, 	[SchemeHidSel]       = { "#9ece6a",
// normbordercolor,		c000000,              c000000 }, 	[SchemeUrg]
// = { "#7aa2f7",        normbgcolor,			urgbordercolor,
// urgfloatcolor },
// };
