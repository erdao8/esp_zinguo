/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.4 at Fri Feb 21 22:28:55 2020. */

#include "ZinguoConfig.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t ZinguoConfigMessage_fields[11] = {
    PB_FIELD(  1, BOOL    , SINGULAR, STATIC  , FIRST, ZinguoConfigMessage, dual_motor, dual_motor, 0),
    PB_FIELD(  2, BOOL    , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, dual_warm, dual_motor, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, delay_blow, dual_warm, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, linkage, delay_blow, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, max_temp, linkage, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, close_warm, max_temp, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, close_ventilation, close_warm, 0),
    PB_FIELD(  8, BOOL    , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, beep, close_ventilation, 0),
    PB_FIELD(  9, BOOL    , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, reverse_led, beep, 0),
    PB_FIELD( 10, UINT32  , SINGULAR, STATIC  , OTHER, ZinguoConfigMessage, report_interval, reverse_led, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
