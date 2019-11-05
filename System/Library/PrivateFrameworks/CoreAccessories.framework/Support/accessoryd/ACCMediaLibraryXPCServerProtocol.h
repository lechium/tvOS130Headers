/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCMediaLibraryXPCServerProtocol <NSObject>
@required
-(void)initConnection:(/*^block*/id)arg1;
-(void)resetUpdate:(id)arg1 accessory:(id)arg2;
-(void)notifyAvailableLibraries:(id)arg1 provider:(id)arg2;
-(void)notify:(id)arg1 stateChange:(int)arg2 enabled:(BOOL)arg3;
-(void)update:(id)arg1 updates:(id)arg2 accessory:(id)arg3;
-(void)update:(id)arg1 revision:(id)arg2 content:(id)arg3 accessory:(id)arg4;

@end
