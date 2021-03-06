/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class TVLLegacyJSContext, TVLDocument, TVLXMLDocument;

@interface TVLJSDocumentUpdator : NSObject {

	BOOL _isUsed;
	TVLLegacyJSContext* _context;
	TVLDocument* _feedDocument;
	TVLXMLDocument* _xmlDocument;

}

@property (nonatomic,retain) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TVLDocument * feedDocument;                //@synthesize feedDocument=_feedDocument - In the implementation block
@property (nonatomic,retain) TVLXMLDocument * xmlDocument;              //@synthesize xmlDocument=_xmlDocument - In the implementation block
@property (assign,nonatomic) BOOL isUsed;                               //@synthesize isUsed=_isUsed - In the implementation block
+(id)documentUpdatorForContext:(OpaqueJSContextRef)arg1 xmlDocument:(id)arg2 ;
-(TVLLegacyJSContext *)context;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(TVLDocument *)feedDocument;
-(TVLXMLDocument *)xmlDocument;
-(void)setFeedDocument:(TVLDocument *)arg1 ;
-(BOOL)isUsed;
-(void)setIsUsed:(BOOL)arg1 ;
-(void)setXmlDocument:(TVLXMLDocument *)arg1 ;
-(id)initWithContext:(id)arg1 feedDocument:(id)arg2 xmlDocument:(id)arg3 ;
-(void)updateDocument;
@end

