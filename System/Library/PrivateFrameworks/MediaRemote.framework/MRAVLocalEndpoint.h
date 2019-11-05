/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRAVConcreteEndpoint.h>
#import <MediaRemote/NSSecureCoding.h>
#import <MediaRemote/MROutputContextDataSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MRAVOutputContext, NSString, NSArray, MROutputContextController;

@interface MRAVLocalEndpoint : MRAVConcreteEndpoint <NSSecureCoding, MROutputContextDataSourceDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRAVOutputContext* _outputContext;
	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;
	MROutputContextController* _outputContextController;

}

@property (nonatomic,copy) NSArray * outputDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(long long)connectionType;
-(MROriginProtobuf*)origin;
-(NSArray *)outputDevices;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(id)initWithOutputDevices:(id)arg1 ;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(void)_reloadOutputDevicesFromContext;
-(id)initWithOutputContext:(id)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(void)outputContextDataSource:(id)arg1 didAddOutputDevice:(id)arg2 ;
-(void)outputContextDataSource:(id)arg1 didRemoveOutputDevice:(id)arg2 ;
-(void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolume:(float)arg3 ;
-(void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolumeControlCapabilities:(unsigned)arg3 ;
-(id)personalOutputDevices;
-(BOOL)canModifyGroupMembership;
-(void)connectToExternalDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ouputDevicesForOutputDeviceUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
