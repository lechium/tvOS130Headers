/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVHomeSharing/TVHJSImageColorAnalyzer.h>

@protocol TVHJSImageColorAnalyzer <JSExport>
@required
-(id)imageColorsForMediaEntityDefaultImage:(id)arg1 :(id)arg2;
-(id)imageColorsForCachedMediaEntityDefaultImage:(id)arg1;

@end


@class NSCache, NSOperationQueue;

@interface TVHJSImageColorAnalyzer : IKJSObject <TVHJSImageColorAnalyzer> {

	NSCache* _imageColorsCache;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSCache * imageColorsCache;                   //@synthesize imageColorsCache=_imageColorsCache - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
-(void)dealloc;
-(id)initWithAppContext:(id)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)_callCallback:(id)arg1 imageColors:(id)arg2 error:(id)arg3 ;
-(id)_imageColorsForMediaEntity:(id)arg1 analyzeCachedImageOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_cachedAnyalzedImageColorsForMediaEntity:(id)arg1 ;
-(void)_cacheAnyalzedImageColors:(id)arg1 forMediaEntity:(id)arg2 ;
-(NSCache *)imageColorsCache;
-(id)imageColorsForMediaEntityDefaultImage:(id)arg1 :(id)arg2 ;
-(id)imageColorsForCachedMediaEntityDefaultImage:(id)arg1 ;
-(void)setImageColorsCache:(NSCache *)arg1 ;
@end

