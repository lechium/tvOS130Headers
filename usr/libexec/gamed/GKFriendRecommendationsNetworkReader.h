/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKDataReader.h>

@class GKDataTransport, NSSet, NSString;

@interface GKFriendRecommendationsNetworkReader : NSObject <GKDataReader> {

	GKDataTransport* _transport;
	NSSet* _recentlyDisplayedPlayerIDs;

}

@property (nonatomic,retain) GKDataTransport * transport;                     //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) NSSet * recentlyDisplayedPlayerIDs;              //@synthesize recentlyDisplayedPlayerIDs=_recentlyDisplayedPlayerIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readerWithDisplayedPlayerIDs:(id)arg1 transport:(id)arg2 ;
-(void)dealloc;
-(GKDataTransport *)transport;
-(void)setTransport:(GKDataTransport *)arg1 ;
-(id)requestBody;
-(void)readResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithDisplayedPlayerIDs:(id)arg1 transport:(id)arg2 ;
-(void)setRecentlyDisplayedPlayerIDs:(NSSet *)arg1 ;
-(id)poolName;
-(id)friendRecommendationForRepresentation:(id)arg1 ;
-(NSSet *)recentlyDisplayedPlayerIDs;
@end
