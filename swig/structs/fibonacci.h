/* File : fibonacci.h
 *
 * Header declaring the public interface.
 */

#pragma once

#include <stdint.h>

typedef uint32_t dtype;

struct MsgMetaData
{
    dtype type;  // Message Type
    dtype job;   // Job ID
    dtype size;  // Message Size (not including the metadata header)
};

extern int compute_fibonacci(int n);

struct MsgMetaData populate_struct(dtype msgType, dtype jobId, dtype msgSize);
