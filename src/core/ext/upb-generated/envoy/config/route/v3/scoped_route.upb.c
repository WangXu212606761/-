/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/route/v3/scoped_route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/route/v3/scoped_route.upb.h"
#include "envoy/config/route/v3/route.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_route_v3_ScopedRouteConfiguration_submsgs[2] = {
  {.submsg = &envoy_config_route_v3_RouteConfiguration_msginit},
  {.submsg = &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit},
};

static const upb_MiniTable_Field envoy_config_route_v3_ScopedRouteConfiguration__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {3, UPB_SIZE(20, 40), 1, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {5, UPB_SIZE(24, 48), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_route_v3_ScopedRouteConfiguration_msginit = {
  &envoy_config_route_v3_ScopedRouteConfiguration_submsgs[0],
  &envoy_config_route_v3_ScopedRouteConfiguration__fields[0],
  UPB_SIZE(32, 64), 5, upb_ExtMode_NonExtendable, 5, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_route_v3_ScopedRouteConfiguration_Key_submsgs[1] = {
  {.submsg = &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit},
};

static const upb_MiniTable_Field envoy_config_route_v3_ScopedRouteConfiguration_Key__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit = {
  &envoy_config_route_v3_ScopedRouteConfiguration_Key_submsgs[0],
  &envoy_config_route_v3_ScopedRouteConfiguration_Key__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit = {
  NULL,
  &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment__fields[0],
  UPB_SIZE(16, 32), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable *messages_layout[3] = {
  &envoy_config_route_v3_ScopedRouteConfiguration_msginit,
  &envoy_config_route_v3_ScopedRouteConfiguration_Key_msginit,
  &envoy_config_route_v3_ScopedRouteConfiguration_Key_Fragment_msginit,
};

const upb_MiniTable_File envoy_config_route_v3_scoped_route_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  3,
  0,
  0,
};

#include "upb/port_undef.inc"

