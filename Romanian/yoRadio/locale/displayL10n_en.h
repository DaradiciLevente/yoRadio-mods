#ifndef dsp_full_loc
#define dsp_full_loc
#include <pgmspace.h>
/*************************************************************************************
    HOWTO:
    Copy this file to yoRadio/locale/displayL10n_custom.h
    and modify it
*************************************************************************************/
const char mon[] PROGMEM = "lu";
const char tue[] PROGMEM = "ma";
const char wed[] PROGMEM = "mi";
const char thu[] PROGMEM = "jo";
const char fri[] PROGMEM = "vi";
const char sat[] PROGMEM = "sa";
const char sun[] PROGMEM = "du";

const char monf[] PROGMEM = "luni";
const char tuef[] PROGMEM = "marti";
const char wedf[] PROGMEM = "miercuri";
const char thuf[] PROGMEM = "joi";
const char frif[] PROGMEM = "vineri";
const char satf[] PROGMEM = "sambata";
const char sunf[] PROGMEM = "duminica";

const char jan[] PROGMEM = "ianuarie";
const char feb[] PROGMEM = "februarie";
const char mar[] PROGMEM = "martie";
const char apr[] PROGMEM = "aprilie";
const char may[] PROGMEM = "mai";
const char jun[] PROGMEM = "junie";
const char jul[] PROGMEM = "julie";
const char aug[] PROGMEM = "august";
const char sep[] PROGMEM = "septemberie";
const char oct[] PROGMEM = "octombrie";
const char nov[] PROGMEM = "noiembrie";
const char dec[] PROGMEM = "decembrie";

const char wn_N[]      PROGMEM = "NORD";
const char wn_NNE[]    PROGMEM = "NNE";
const char wn_NE[]     PROGMEM = "NE";
const char wn_ENE[]    PROGMEM = "ENE";
const char wn_E[]      PROGMEM = "EST";
const char wn_ESE[]    PROGMEM = "ESE";
const char wn_SE[]     PROGMEM = "SE";
const char wn_SSE[]    PROGMEM = "SSE";
const char wn_S[]      PROGMEM = "SUD";
const char wn_SSW[]    PROGMEM = "SSV";
const char wn_SW[]     PROGMEM = "SV";
const char wn_WSW[]    PROGMEM = "VSV";
const char wn_W[]      PROGMEM = "VEST";
const char wn_WNW[]    PROGMEM = "VNV";
const char wn_NW[]     PROGMEM = "NV";
const char wn_NNW[]    PROGMEM = "NNV";

const char* const dow[]     PROGMEM = { sun, mon, tue, wed, thu, fri, sat };
const char* const dowf[]    PROGMEM = { sunf, monf, tuef, wedf, thuf, frif, satf };
const char* const mnths[]   PROGMEM = { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
const char* const wind[]    PROGMEM = { wn_N, wn_NNE, wn_NE, wn_ENE, wn_E, wn_ESE, wn_SE, wn_SSE, wn_S, wn_SSW, wn_SW, wn_WSW, wn_W, wn_WNW, wn_NW, wn_NNW, wn_N };

const char    const_PlReady[]    PROGMEM = "[gata]";
const char  const_PlStopped[]    PROGMEM = "[oprit]";
const char  const_PlConnect[]    PROGMEM = "[conectare]";
const char  const_DlgVolume[]    PROGMEM = "VOLUM";
const char    const_DlgLost[]    PROGMEM = "* PIERDUT *";
const char  const_DlgUpdate[]    PROGMEM = "* UPDATARE *";
const char const_DlgNextion[]    PROGMEM = "* NEXTION *";
const char const_getWeather[]    PROGMEM = "";
const char  const_waitForSD[]    PROGMEM = "INDEX SD";

const char        apNameTxt[]    PROGMEM = "NUME AP";
const char        apPassTxt[]    PROGMEM = "PAROLA";
const char       bootstrFmt[]    PROGMEM = "Conectare la %s";
const char        apSettFmt[]    PROGMEM = "PAGINA SETARI: HTTP://%s/";
#if EXT_WEATHER
//const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 se simte ca: %.1f\011C \007 presiune: %d мм \007 umiditate: %s%% \007 vant: %.1f m/s [%s]";
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 se simte ca: %.1f\011C \007 presiune: %d mmHg \007 umiditate: %s%% \007 vant: %.1f m/s [%s]";
#else
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 presiune: %d mm \007 umiditate: %s%%";
#endif
const char     weatherUnits[]    PROGMEM = "metric";   /* standard, metric, imperial */
const char      weatherLang[]    PROGMEM = "ro";       /* https://openweathermap.org/current#multi */

#endif
