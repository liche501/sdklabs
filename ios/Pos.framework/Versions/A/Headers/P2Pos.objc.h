// Objective-C API for talking to pangpangjan/pos/sdk Go package.
//   gobind -lang=objc -prefix="P2" pangpangjan/pos/sdk
//
// File is generated by gobind. Do not edit.

#ifndef __P2Pos_H__
#define __P2Pos_H__

@import Foundation;
#include "Universe.objc.h"


@class P2PosHttpClient;

@interface P2PosHttpClient : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (id)initWithRef:(id)ref;
// skipped field HttpClient.Endpoints with unsupported type: *types.Named

@end

@interface P2Pos : NSObject
+ (NSString*) transportMode;
+ (void) setTransportMode:(NSString*)v;

@end

FOUNDATION_EXPORT NSString* P2PosCall(NSString* uri);

// skipped function DecodeHTTPOrderResponse with unsupported parameter or return types


// skipped function DecodeHTTPPosRemoteCallResponse with unsupported parameter or return types


// skipped function EncodeHTTPGenericRequest with unsupported parameter or return types


// skipped function EncodeHTTPPosRemoteCallRequest with unsupported parameter or return types


FOUNDATION_EXPORT void P2PosInit(NSString* contextDir);

FOUNDATION_EXPORT P2PosHttpClient* P2PosNewHttpClient(NSString* addr, NSError** error);

#endif