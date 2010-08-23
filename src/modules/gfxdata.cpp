/* ASE - Allegro Sprite Editor
 * Copyright (C) 2001-2010  David Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

typedef struct DATA
{
  char w, h;         /* width and height of the bitmap */
  const char* line;  /* scanline data */
} DATA;

static DATA gfx_data[GFX_BITMAP_COUNT] =
{
  /* GFX_ANI_FIRST */
  { 8, 8,
    " ##   # "
    " ##  ## "
    " ## ### "
    " ###### "
    " ## ### "
    " ##  ## "
    " ##   # "
    "        " },
  /* GFX_ANI_PREV */
  { 8, 8,
    "   # ## "
    "  ## ## "
    " ### ## "
    "#### ## "
    " ### ## "
    "  ## ## "
    "   # ## "
    "        " },
  /* GFX_ANI_PLAY */
  { 8, 8,
    "  #     "
    "  ##    "
    "  ###   "
    "  ####  "
    "  ###   "
    "  ##    "
    "  #     "
    "        " },
  /* GFX_ANI_NEXT */
  { 8, 8,
    " ## #   "
    " ## ##  "
    " ## ### "
    " ## ####"
    " ## ### "
    " ## ##  "
    " ## #   "
    "        " },
  /* GFX_ANI_LAST */
  { 8, 8,
    " #    ##"
    " ##   ##"
    " ###  ##"
    " #### ##"
    " ###  ##"
    " ##   ##"
    " #    ##"
    "        " },
  /* GFX_TARGET_ONE */
  { 32, 16,
    "                                "
    "                                "
    "                                "
    "                                "
    "      ###################       "
    "      #                 #       "
    "      #                 #       "
    "      #                 #       "
    "      #                 #       "
    "      #                 #       "
    "      ###################       "
    "                                "
    "                                "
    "                                "
    "                                "
    "                                " },
  /* GFX_TARGET_FRAMES */
  { 32, 16,
    "                                "
    "                                "
    "                                "
    "                                "
    "      ###################       "
    "      #       #  #      #       "
    "      #    #####  #     #       "
    "      #    ######  #    #       "
    "      #    #####  #     #       "
    "      #       #  #      #       "
    "      ###################       "
    "                                "
    "                                "
    "                                "
    "                                "
    "                                " },
  /* GFX_TARGET_LAYERS */
  { 32, 16,
    "                                "
    "   ###################          "
    "   #                 #          "
    "   #                 #          "
    "   #                 ####       "
    "   #                 #  #       "
    "   #                 #  ####    "
    "   ###################  #  #    "
    "      #                 #  #    "
    "      #                 #  #    "
    "      ###################  #    "
    "         #                 #    "
    "         #                 #    "
    "         ###################    "
    "                                "
    "                                " },
  /* GFX_TARGET_FRAMES_LAYERS */
  { 32, 16,
    "                                "
    "   ###################          "
    "   #       #  #      #          "
    "   #    #####  #     #          "
    "   #    ######  #    ####       "
    "   #    #####  #     #  #       "
    "   #       #  #      #  ####    "
    "   ###################  #  #    "
    "      #                 #  #    "
    "      #                 #  #    "
    "      ###################  #    "
    "         #                 #    "
    "         #                 #    "
    "         ###################    "
    "                                "
    "                                " },
  /* GFX_BRUSH_CIRCLE */
  { 7, 7,
    "  ###  "
    " ##### "
    "#######"
    "#######"
    "#######"
    " ##### "
    "  ###  " },
  /* GFX_BRUSH_SQUARE */
  { 7, 7,
    "#######"
    "#######"
    "#######"
    "#######"
    "#######"
    "#######"
    "#######" },
  /* GFX_BRUSH_LINE */
  { 6, 6,
    "#     "
    " #    "
    "  #   "
    "   #  "
    "    # "
    "     #" },
  /* GFX_SCALE_1 */
  { 11, 11,
    "##         "
    "#.##       "
    " #..##     "
    " #....#    "
    "  #..##    "
    "  #.#.#    "
    "   ###.#   "
    "      #.#  "
    "       #.# "
    "        #.#"
    "         ##" },
  /* GFX_SCALE_2 */
  { 7, 12,
    "   #   "
    "  #.#  "
    "  #.#  "
    " #...# "
    " #...# "
    "#.....#"
    "###.###"
    "  #.#  "
    "  #.#  "
    "  #.#  "
    "  #.#  "
    "   #   " },
  /* GFX_SCALE_3 */
  { 12, 7,
    "     ##     "
    "   ##.#     "
    " ##...##### "
    "#..........#"
    " ##...##### "
    "   ##.#     "
    "     ##     " },
  /* GFX_ROTATE_1 */
  { 11, 11,
    "      ##   "
    "   ####.## "
    "  #.......#"
    " #..###.## "
    " #.#  ##   "
    " #.#       "
    "##.##      "
    "#...#      "
    " #.#       "
    " #.#       "
    "  #        " },
  /* GFX_ROTATE_2 */
  { 15, 10,
    "      ###      "
    "     #...#     "
    "  # #.###.# #  "
    "  ##.#   #.##  "
    " #..#     #..# "
    " #..##   ##..# "
    "#.##       ##.#"
    "##           ##"
    "               "
    "               " },
  /* GFX_ROTATE_3 */
  { 10, 15,
    "      ##  "
    "    ##.#  "
    "  ##..#   "
    "   #..#   "
    "  #.##    "
    " #.# #    "
    "#.#       "
    "#.#       "
    "#.#       "
    " #.# #    "
    "  #.##    "
    "   #..#   "
    "  ##..#   "
    "    ##.#  "
    "      ##  " },
  /* GFX_ARROW_LEFT */
  { 8, 8,
    "     #  "
    "    ##  "
    "   ###  "
    "  ####  "
    "   ###  "
    "    ##  "
    "     #  "
    "        " },
  /* GFX_ARROW_RIGHT */
  { 8, 8,
    "  #     "
    "  ##    "
    "  ###   "
    "  ####  "
    "  ###   "
    "  ##    "
    "  #     "
    "        " },
  /* GFX_ARROW_UP */
  { 8, 8,
    "        "
    "        "
    "   #    "
    "  ###   "
    " #####  "
    "####### "
    "        "
    "        " },
  /* GFX_ARROW_DOWN */
  { 8, 8,
    "        "
    "        "
    "####### "
    " #####  "
    "  ###   "
    "   #    "
    "        "
    "        " },
  /* GFX_BOX_SHOW */
  { 8, 8,
    "  ####  "
    " #    # "
    "# #### #"
    "#### ###"
    "# #### #"
    "#  ##  #"
    " #    # "
    "  ####  " },
  /* GFX_BOX_HIDE */
  { 8, 8,
    "##    # "
    " ##  #  "
    "  ####  "
    "   ##   "
    "  ####  "
    "  #  ## "
    " #    # "
    "#       "},
  /* GFX_BOX_LOCK */
  { 8, 8,
    "        "
    "  ###   "
    " #   #  "
    "####### "
    "### ### "
    "### ### "
    "### ### "
    " #####  " },
  /* GFX_BOX_UNLOCK */
  { 8, 8,
    "  ###   "
    " #   #  "
    "     #  "
    "####### "
    "### ### "
    "### ### "
    "### ### "
    " #####  " },
};
