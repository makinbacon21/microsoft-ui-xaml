﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "TypeLogging.h"
#include "ScrollPresenterTypeLogging.h"
#include "OffsetsChangeWithVelocity.h"

OffsetsChangeWithVelocity::OffsetsChangeWithVelocity(
    winrt::float2 offsetsVelocity) :
        m_offsetsVelocity(offsetsVelocity)
{
    SCROLLPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_STR, METH_NAME, this,
        TypeLogging::Float2ToString(offsetsVelocity).c_str());
}

OffsetsChangeWithVelocity::~OffsetsChangeWithVelocity()
{
    SCROLLPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH, METH_NAME, this);
}

void OffsetsChangeWithVelocity::OffsetsVelocity(winrt::float2 const& offsetsVelocity)
{
    SCROLLPRESENTER_TRACE_VERBOSE(nullptr, TRACE_MSG_METH_STR, METH_NAME, this,
        TypeLogging::Float2ToString(offsetsVelocity).c_str());

    m_offsetsVelocity = offsetsVelocity;
}
