/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSURL;

@interface DownloadArtworkCacheOperation : ISOperation {

	NSData* _artworkData;
	long long _downloadID;
	BOOL _isStoreDownload;
	NSURL* _thumbnailURL;

}

@property (readonly) NSData * artworkData; 
-(void)dealloc;
-(void)run;
-(NSData *)artworkData;
-(void)_setArtworkData:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2 ;
-(id)initWithStoreDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2 ;
@end
