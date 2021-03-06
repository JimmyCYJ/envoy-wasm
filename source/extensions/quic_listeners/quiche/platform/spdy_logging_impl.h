#pragma once

// NOLINT(namespace-envoy)
//
// This file is part of the QUICHE platform implementation, and is not to be
// consumed or referenced directly by other Envoy code. It serves purely as a
// porting layer for QUICHE.

#include "extensions/quic_listeners/quiche/platform/quic_logging_impl.h"

#define SPDY_LOG_IMPL(severity) QUIC_LOG_IMPL(severity)

#define SPDY_VLOG_IMPL(verbose_level) QUIC_VLOG_IMPL(verbose_level)

#define SPDY_DLOG_IMPL(severity) QUIC_DLOG_IMPL(severity)

#define SPDY_DLOG_IF_IMPL(severity, condition) QUIC_DLOG_IF_IMPL(severity, condition)

#define SPDY_DVLOG_IMPL(verbose_level) QUIC_DVLOG_IMPL(verbose_level)

#define SPDY_DVLOG_IF_IMPL(verbose_level, condition) QUIC_DVLOG_IF_IMPL(verbose_level, condition)
