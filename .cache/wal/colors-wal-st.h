const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0a11", /* black   */
  [1] = "#444659", /* red     */
  [2] = "#525569", /* green   */
  [3] = "#60647A", /* yellow  */
  [4] = "#6D738A", /* blue    */
  [5] = "#7988A1", /* magenta */
  [6] = "#8895AF", /* cyan    */
  [7] = "#c0d0e0", /* white   */

  /* 8 bright colors */
  [8]  = "#86919c",  /* black   */
  [9]  = "#444659",  /* red     */
  [10] = "#525569", /* green   */
  [11] = "#60647A", /* yellow  */
  [12] = "#6D738A", /* blue    */
  [13] = "#7988A1", /* magenta */
  [14] = "#8895AF", /* cyan    */
  [15] = "#c0d0e0", /* white   */

  /* special colors */
  [256] = "#0a0a11", /* background */
  [257] = "#c0d0e0", /* foreground */
  [258] = "#c0d0e0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
