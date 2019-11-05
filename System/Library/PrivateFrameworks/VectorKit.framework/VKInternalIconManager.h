/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKInternalIconManager : NSObject {

	shared_ptr<grl::IconManager>* _iconManager;
	shared_ptr<md::StylesheetVendor>* _stylesheetVendor;
	read_write_lock _nameToStyleManagerLock;
	map<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> >, NSStringMapComparison, geo::StdAllocator<std::__1::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, mdm::Allocator> >* _nameToStyleManager;
	retain_ptr<VKResourceManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>* _resourceManager;
	shared_ptr<md::GeoResourceProvider>* _resourceProvider;
	shared_ptr<grl::FontManager>* _fontManager;

}
+(long long)convertGrlSizeGroup:(unsigned char)arg1 ;
+(unsigned char)convertSizeGroup:(long long)arg1 ;
+(unsigned)convertCalloutShape:(unsigned char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)purge;
-(id)init:(shared_ptr<grl::IconManager>*)arg1 stylesheetVendor:(shared_ptr<md::StylesheetVendor>*)arg2 ;
-(id)imageForStyleAttributes:(id)arg1 styleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5 ;
-(id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5 ;
-(id)imageForDataID:(unsigned)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5 ;
-(id)imageForKey:(unsigned)arg1 value:(unsigned)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5 ;
-(id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4 ;
-(unsigned)styleAttributeTransitTypeKey;
-(unsigned)styleAttributeTransitSystemTypeKey;
-(unsigned)trafficIncidentTypeKey;
-(unsigned)darkVariant;
-(BOOL)isCachingAtlases;
-(void)setIsCachingAtlases:(BOOL)arg1 ;
@end
