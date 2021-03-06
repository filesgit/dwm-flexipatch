/* Patches */
#if ALPHA_PATCH
#include "alpha.h"
#endif
#if ALTERNATIVE_TAGS_PATCH
#include "alternativetags.h"
#endif
#if ATTACHABOVE_PATCH || ATTACHASIDE_PATCH || ATTACHBELOW_PATCH || ATTACHBOTTOM_PATCH
#include "attachx.h"
#endif
#if AUTOSTART_PATCH
#include "autostart.h"
#endif
#if AWESOMEBAR_PATCH
#include "awesomebar.h"
#endif
#if CFACTS_PATCH
#include "cfacts.h"
#endif
#if CMDCUSTOMIZE_PATCH
#include "cmdcustomize.h"
#endif
#if COMBO_PATCH
#include "combo.h"
#endif
#if CYCLELAYOUTS_PATCH
#include "cyclelayouts.h"
#endif
#if DRAGCFACT_PATCH && CFACTS_PATCH
#include "dragcfact.h"
#endif
#if DRAGMFACT_PATCH
#include "dragmfact.h"
#endif
#if DWMBLOCKS_PATCH && STATUSCMD_PATCH
#include "dwmblocks.h"
#endif
#if DWMC_PATCH
#include "dwmc.h"
#elif FSIGNAL_PATCH
#include "fsignal.h"
#endif
#if EWMHTAGS_PATCH
#include "ewmhtags.h"
#endif
#if EXRESIZE_PATCH
#include "exresize.h"
#endif
#if !FAKEFULLSCREEN_PATCH && FAKEFULLSCREEN_CLIENT_PATCH
#include "fakefullscreenclient.h"
#endif
#if FLOATPOS_PATCH
#include "floatpos.h"
#endif
#if FOCUSADJACENTTAG_PATCH
#include "focusadjacenttag.h"
#endif
#if FOCUSURGENT_PATCH
#include "focusurgent.h"
#endif
#if FULLSCREEN_PATCH
#include "fullscreen.h"
#endif
#if HOLDBAR_PATCH
#include "holdbar.h"
#endif
#if INPLACEROTATE_PATCH
#include "inplacerotate.h"
#endif
#if KEYMODES_PATCH
#include "keymodes.h"
#endif
#if KILLUNSEL_PATCH
#include "killunsel.h"
#endif
#if MAXIMIZE_PATCH
#include "maximize.h"
#endif
#if MDPCONTROL_PATCH
#include "mdpcontrol.h"
#endif
#if MOVEPLACE_PATCH
#include "moveplace.h"
#endif
#if MOVERESIZE_PATCH
#include "moveresize.h"
#endif
#if MOVESTACK_PATCH
#include "movestack.h"
#endif
#if PERTAG_PATCH
#include "pertag.h"
#endif
#if PUSH_NO_MASTER_PATCH
#include "push_no_master.h"
#elif PUSH_PATCH
#include "push.h"
#endif
#if RESTARTSIG_PATCH
#include "restartsig.h"
#endif
#if ROTATESTACK_PATCH
#include "rotatestack.h"
#endif
#if ROUNDED_CORNERS_PATCH
#include "roundedcorners.h"
#endif
#if SCRATCHPADS_PATCH
#include "scratchpad.h"
#endif
#if SCRATCHPAD_ALT_1_PATCH
#include "scratchpad_alt_1.h"
#endif
#if SELFRESTART_PATCH
#include "selfrestart.h"
#endif
#if SETBORDERPX_PATCH
#include "setborderpx.h"
#endif
#if SHIFTVIEW_PATCH
#include "shiftview.h"
#endif
#if SHIFTVIEW_CLIENTS_PATCH
#include "shiftviewclients.h"
#endif
#if SIZEHINTS_RULED_PATCH
#include "sizehints_ruled.h"
#endif
#if SORTSCREENS_PATCH
#ifdef XINERAMA
#include "sortscreens.h"
#endif // XINERAMA
#endif
#if STACKER_PATCH
#include "stacker.h"
#endif
#if STATUS2D_PATCH && !STATUSCOLORS_PATCH
#include "status2d.h"
#endif
#if STATUSCMD_PATCH
#include "statuscmd.h"
#endif
#if STICKY_PATCH
#include "sticky.h"
#endif
#if SYSTRAY_PATCH
#include "systray.h"
#endif
#if SWALLOW_PATCH
#include "swallow.h"
#endif
#if SWAPFOCUS_PATCH && PERTAG_PATCH
#include "swapfocus.h"
#endif
#if SWAPTAGS_PATCH
#include "swaptags.h"
#endif
#if SWITCHCOL_PATCH
#include "switchcol.h"
#endif
#if TAGALL_PATCH
#include "tagall.h"
#endif
#if TAGALLMON_PATCH
#include "tagallmon.h"
#endif
#if TAGGRID_PATCH
#include "taggrid.h"
#endif
#if TAGOTHERMONITOR_PATCH
#include "tagothermonitor.h"
#endif
#if TAGSWAPMON_PATCH
#include "tagswapmon.h"
#endif
#if TOGGLEFULLSCREEN_PATCH
#include "togglefullscreen.h"
#endif
#if TRANSFER_PATCH
#include "transfer.h"
#endif
#if TRANSFER_ALL_PATCH
#include "transferall.h"
#endif
#if UNFLOATVISIBLE_PATCH
#include "unfloatvisible.h"
#endif
#if VANITYGAPS_PATCH
#include "vanitygaps.h"
#endif
#if VTCOLORS_PATCH
#include "vtcolors.h"
#endif
#if WARP_PATCH
#include "warp.h"
#endif
#if WINVIEW_PATCH
#include "winview.h"
#endif
#if ZOOMSWAP_PATCH
#include "zoomswap.h"
#endif
#if XRDB_PATCH && !VTCOLORS_PATCH
#include "xrdb.h"
#endif
/* Layouts */
#if BSTACK_LAYOUT
#include "bstack.h"
#endif
#if BSTACKHORIZ_LAYOUT
#include "bstackhoriz.h"
#endif
#if CENTEREDMASTER_LAYOUT
#include "centeredmaster.h"
#endif
#if CENTEREDFLOATINGMASTER_LAYOUT
#include "centeredfloatingmaster.h"
#endif
#if COLUMNS_LAYOUT
#include "columns.h"
#endif
#if DECK_LAYOUT
#include "deck.h"
#endif
#if FIBONACCI_DWINDLE_LAYOUT || FIBONACCI_SPIRAL_LAYOUT
#include "fibonacci.h"
#endif
#if FLEXTILE_DELUXE_LAYOUT
#include "flextile-deluxe.h"
#endif
#if GAPPLESSGRID_LAYOUT
#include "gapplessgrid.h"
#endif
#if GRIDMODE_LAYOUT
#include "grid.h"
#endif
#if HORIZGRID_LAYOUT
#include "horizgrid.h"
#endif
#if MONOCLE_LAYOUT
#include "monocle.h"
#endif
#if NROWGRID_LAYOUT
#include "nrowgrid.h"
#endif
#if TILE_LAYOUT
#include "tile.h"
#endif
