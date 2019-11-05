/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSUUID, NSObject;

@interface NRDOrphanedConnection : NSObject {

	NSUUID* _nrUUID;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSUUID * nrUUID;                                  //@synthesize nrUUID=_nrUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(NSUUID *)nrUUID;
-(void)setNrUUID:(NSUUID *)arg1 ;
@end
