/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class NSMutableDictionary, NSMapTable;

@interface JSWrapperMap : NSObject {

	NSMutableDictionary* m_classMap;
	unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> >, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > > >* m_cachedJSWrappers;
	NSMapTable* m_cachedObjCWrappers;

}
-(void)dealloc;
-(id)classInfoForClass:(Class)arg1 ;
-(id)initWithGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(id)jsWrapperForObject:(id)arg1 inContext:(id)arg2 ;
-(id)objcWrapperForJSValueRef:(OpaqueJSValueRef)arg1 inContext:(id)arg2 ;
@end

