/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKDataWriter.h>

@class NSString, GKDataTransport, NSNumber;

@interface GKDelayedSetPhotoNetworkWriter : NSObject <GKDataWriter> {

	NSString* _bagKey;
	GKDataTransport* _transport;
	NSNumber* _avatarType;

}

@property (nonatomic,retain) NSString * bagKey;                        //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,retain) GKDataTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,copy) NSNumber * avatarType;                      //@synthesize avatarType=_avatarType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writerWithTransport:(id)arg1 forBagKey:(id)arg2 ;
-(GKDataTransport *)transport;
-(void)setTransport:(GKDataTransport *)arg1 ;
-(NSString *)bagKey;
-(void)setBagKey:(NSString *)arg1 ;
-(NSNumber *)avatarType;
-(void)setAvatarType:(NSNumber *)arg1 ;
-(void)writeResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithTransport:(id)arg1 forBagKey:(id)arg2 ;
-(void)uploadImageData:(id)arg1 toURL:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)uploadProfileImageMetadata:(id)arg1 fromUploadURL:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

