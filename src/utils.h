#ifndef UTILS_H
#define UTILS_H

#include "file-jxr.h"
#include <JXRGlue.h>

guint get_bits_per_pixel(const PKPixelFormatGUID* pixel_format);
ERR convert_bw_indexed(const guchar* pixels, guint width, guint height, guchar** conv_pixels);
void convert_indexed_bw(guchar* pixels, guint width, guint height);
void convert_rgba_bgra(guchar* pixels, guint width, guint height);
gboolean has_blackwhite_colormap(gint32 image_ID, gboolean* black_one);
gchar* get_pixel_format_mnemonic(const PKPixelFormatGUID* pixel_format);

typedef struct
{
    guint             width;
    guint             height;
    guint             stride;
    gfloat            resolution_x;
    gfloat            resolution_y;
    PKPixelFormatGUID pixel_format; 
    guchar*           color_context;
    guint             color_context_size;
    guchar*           xmp_metadata;
    guint             xmp_metadata_size;
    gboolean          black_one;
    guchar*           pixels;
} Image;

#endif
