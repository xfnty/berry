#ifndef _IPC_H_
#define _IPC_H

#define BERRY_CLIENT_EVENT "BERRY_CLIENT_EVENT"

enum IPCCommand
{
    IPCWindowMoveRelative,
    IPCWindowMoveAbsolute,
    IPCWindowMonocle,
    IPCWindowRaise,
    IPCWindowResizeRelative,
    IPCWindowResizeAbsolute,
    IPCWindowToggleDecorations,
    IPCFocusColor,
    IPCUnfocusColor,
    IPCInnerFocusColor,
    IPCInnerUnfocusColor,
    IPCTitleFocusColor,
    IPCTitleUnfocusColor,
    IPCBorderWidth,
    IPCInnerBorderWidth,
    IPCTitleHeight,
    IPCSwitchWorkspace,
    IPCSendWorkspace,
    IPCLast
};

#endif
