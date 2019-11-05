/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DKDAAPParserDelegate.h>

@class NSMutableArray, NSString;

@interface ContainerCloudIDsParserDelegate : NSObject <DKDAAPParserDelegate> {

	unsigned char _currentPlaylistKind;
	unsigned _currentPlaylistCloudID;
	NSMutableArray* _subscribedPlaylistCloudIDs;

}

@property (nonatomic,readonly) NSMutableArray * subscribedPlaylistCloudIDs;              //@synthesize subscribedPlaylistCloudIDs=_subscribedPlaylistCloudIDs - In the implementation block
@property (nonatomic,readonly) unsigned currentPlaylistCloudID;                          //@synthesize currentPlaylistCloudID=_currentPlaylistCloudID - In the implementation block
@property (nonatomic,readonly) unsigned char currentPlaylistKind;                        //@synthesize currentPlaylistKind=_currentPlaylistKind - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)parser:(id)arg1 shouldParseCode:(unsigned)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned)arg2 ;
-(void)parser:(id)arg1 didStartContainerCode:(unsigned)arg2 contentLength:(unsigned)arg3 ;
-(void)parser:(id)arg1 didParseDataCode:(unsigned)arg2 bytes:(char*)arg3 contentLength:(unsigned)arg4 ;
-(void)parser:(id)arg1 didEndContainerCode:(unsigned)arg2 ;
-(NSMutableArray *)subscribedPlaylistCloudIDs;
-(unsigned)currentPlaylistCloudID;
-(unsigned char)currentPlaylistKind;
@end
