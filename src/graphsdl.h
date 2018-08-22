#ifndef GRAPHSDL_INC
#define GRAPHSDL_INC

extern void get_sdl_mouse(int32 values[]);
extern void sdl_mouse_onoff(int state);
extern void set_wintitle(char *title);
extern void fullscreenmode(int onoff);
extern void setupnewmode(int32 mode, int32 xres, int32 yres, int32 cols, int32 mxscale, int32 myscale, int32 xeig, int32 yeig);
extern void star_refresh(int flag);
extern int get_refreshmode(void);
extern void osbyte112(int x);
extern void osbyte113(int x);
extern int32 osbyte134_165(int32 a);
extern void reset_sysfont(int x);
extern void hide_cursor(void);
extern void reveal_cursor(void);
extern void osword10(int32 x);

#endif
