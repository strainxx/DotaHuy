#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 42
    // Alignment: 4
    // Size: 0x4
    enum class ELeagueAuditAction : std::uint32_t
    {
        LEAGUE_AUDIT_ACTION_INVALID = 0x0,
        LEAGUE_AUDIT_ACTION_LEAGUE_CREATE = 0x1,
        LEAGUE_AUDIT_ACTION_LEAGUE_EDIT = 0x2,
        LEAGUE_AUDIT_ACTION_LEAGUE_DELETE = 0x3,
        LEAGUE_AUDIT_ACTION_LEAGUE_ADMIN_ADD = 0x4,
        LEAGUE_AUDIT_ACTION_LEAGUE_ADMIN_REVOKE = 0x5,
        LEAGUE_AUDIT_ACTION_LEAGUE_ADMIN_PROMOTE = 0x6,
        LEAGUE_AUDIT_ACTION_LEAGUE_STREAM_ADD = 0x7,
        LEAGUE_AUDIT_ACTION_LEAGUE_STREAM_REMOVE = 0x8,
        LEAGUE_AUDIT_ACTION_LEAGUE_IMAGE_UPDATED = 0x9,
        LEAGUE_AUDIT_ACTION_LEAGUE_MESSAGE_ADDED = 0xa,
        LEAGUE_AUDIT_ACTION_LEAGUE_SUBMITTED = 0xb,
        LEAGUE_AUDIT_ACTION_LEAGUE_SET_PRIZE_POOL = 0xc,
        LEAGUE_AUDIT_ACTION_LEAGUE_ADD_PRIZE_POOL_ITEM = 0xd,
        LEAGUE_AUDIT_ACTION_LEAGUE_REMOVE_PRIZE_POOL_ITEM = 0xe,
        LEAGUE_AUDIT_ACTION_LEAGUE_MATCH_START = 0xf,
        LEAGUE_AUDIT_ACTION_LEAGUE_MATCH_END = 0x10,
        LEAGUE_AUDIT_ACTION_LEAGUE_ADD_INVITED_TEAM = 0x11,
        LEAGUE_AUDIT_ACTION_LEAGUE_REMOVE_INVITED_TEAM = 0x12,
        LEAGUE_AUDIT_ACTION_LEAGUE_STATUS_CHANGED = 0x13,
        LEAGUE_AUDIT_ACTION_LEAGUE_STREAM_EDIT = 0x14,
        LEAGUE_AUDIT_ACTION_LEAGUE_TEAM_SWAP = 0x15,
        LEAGUE_AUDIT_ACTION_NODEGROUP_CREATE = 0x64,
        LEAGUE_AUDIT_ACTION_NODEGROUP_DESTROY = 0x65,
        LEAGUE_AUDIT_ACTION_NODEGROUP_ADD_TEAM = 0x66,
        LEAGUE_AUDIT_ACTION_NODEGROUP_REMOVE_TEAM = 0x67,
        LEAGUE_AUDIT_ACTION_NODEGROUP_SET_ADVANCING = 0x68,
        LEAGUE_AUDIT_ACTION_NODEGROUP_EDIT = 0x69,
        LEAGUE_AUDIT_ACTION_NODEGROUP_POPULATE = 0x6a,
        LEAGUE_AUDIT_ACTION_NODEGROUP_COMPLETED = 0x6b,
        LEAGUE_AUDIT_ACTION_NODEGROUP_SET_SECONDARY_ADVANCING = 0x6c,
        LEAGUE_AUDIT_ACTION_NODEGROUP_SET_TERTIARY_ADVANCING = 0x6d,
        LEAGUE_AUDIT_ACTION_NODE_CREATE = 0xc8,
        LEAGUE_AUDIT_ACTION_NODE_DESTROY = 0xc9,
        LEAGUE_AUDIT_ACTION_NODE_AUTOCREATE = 0xca,
        LEAGUE_AUDIT_ACTION_NODE_SET_TEAM = 0xcb,
        LEAGUE_AUDIT_ACTION_NODE_SET_SERIES_ID = 0xcc,
        LEAGUE_AUDIT_ACTION_NODE_SET_ADVANCING = 0xcd,
        LEAGUE_AUDIT_ACTION_NODE_SET_TIME = 0xce,
        LEAGUE_AUDIT_ACTION_NODE_MATCH_COMPLETED = 0xcf,
        LEAGUE_AUDIT_ACTION_NODE_COMPLETED = 0xd0,
        LEAGUE_AUDIT_ACTION_NODE_EDIT = 0xd1,
    };
};
