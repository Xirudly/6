#ifndef _SDE_CRTC_PANEL_DC_LAYER_H_
#define _SDE_CRTC_PANEL_DC_LAYER_H_

typedef struct brightness_alpha {
	uint32_t brightness;
	uint32_t alpha;
} brightness_alpha;

static const brightness_alpha brightness_dc_alpha_lut[] = {
	/* {brightness, alpha} */
	{   0, 0xFF},
	{  20, 0xDF},
	{  40, 0xBF},
	{  60, 0x9F},
	{  80, 0x89},
	{ 100, 0x7A},
	{ 120, 0x72},
	{ 140, 0x6A},
	{ 160, 0x62},
	{ 180, 0x5A},
	{ 200, 0x52},
	{ 220, 0x4A},
	{ 240, 0x42},
	{ 260, 0x3A},
	{ 280, 0x32},
	{ 300, 0x2A},
	{ 320, 0x26},
	{ 340, 0x22},
	{ 360, 0x1E},
	{ 380, 0x1A},
	{ 400, 0x16},
	{ 420, 0x12},
	{ 450, 0x10},
	{ 480, 0x0E},
	{ 510, 0x0C},
	{ 540, 0x0A},
	{ 570, 0x08},
	{ 610, 0x00}
};

#endif /* SDE_CRTC_PANEL_DC_LAYER_H */
