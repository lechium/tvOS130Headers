/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:07:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAirPlay.app/TVAirPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKStoreMediaItem.h>
#import <TVAirPlay/TVAirPlayResourceLoadingMediaItem.h>

@protocol TVAirPlayResourceLoadingMediaItemDelegate;
@class NSString;

@interface TVAirPlayStoreMediaItem : TVCKStoreMediaItem <TVAirPlayResourceLoadingMediaItem> {

	BOOL _preventSpeculativeLoading;
	id<TVAirPlayResourceLoadingMediaItemDelegate> _resourceLoadingDelegate;

}

@property (assign,nonatomic) BOOL preventSpeculativeLoading;                                                            //@synthesize preventSpeculativeLoading=_preventSpeculativeLoading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TVAirPlayResourceLoadingMediaItemDelegate> resourceLoadingDelegate;              //@synthesize resourceLoadingDelegate=_resourceLoadingDelegate - In the implementation block
+(id)_dataItemForParameters:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(BOOL)hasTrait:(id)arg1 ;
-(void)loadStreamingKeyForRequest:(id)arg1 ;
-(void)mergePropertiesFromDataItem:(id)arg1 toDataItem:(id)arg2 ;
-(id<TVAirPlayResourceLoadingMediaItemDelegate>)resourceLoadingDelegate;
-(void)setResourceLoadingDelegate:(id<TVAirPlayResourceLoadingMediaItemDelegate>)arg1 ;
-(BOOL)preventSpeculativeLoading;
-(void)setPreventSpeculativeLoading:(BOOL)arg1 ;
@end
