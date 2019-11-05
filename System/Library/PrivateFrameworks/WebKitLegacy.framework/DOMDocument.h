/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMNode.h>

@class WebFrame, DOMDocumentType, DOMImplementation, DOMElement, NSString, DOMAbstractView, DOMStyleSheetList, DOMHTMLElement, DOMHTMLCollection;

@interface DOMDocument : DOMNode

@property (nonatomic,readonly) WebFrame * webFrame; 
@property (readonly) DOMDocumentType * doctype; 
@property (readonly) DOMImplementation * implementation; 
@property (readonly) DOMElement * documentElement; 
@property (copy,readonly) NSString * inputEncoding; 
@property (copy,readonly) NSString * xmlEncoding; 
@property (copy) NSString * xmlVersion; 
@property (assign) BOOL xmlStandalone; 
@property (copy) NSString * documentURI; 
@property (readonly) DOMAbstractView * defaultView; 
@property (readonly) DOMStyleSheetList * styleSheets; 
@property (copy) NSString * title; 
@property (copy,readonly) NSString * referrer; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * URL; 
@property (copy) NSString * cookie; 
@property (retain) DOMHTMLElement * body; 
@property (readonly) DOMHTMLCollection * images; 
@property (readonly) DOMHTMLCollection * applets; 
@property (readonly) DOMHTMLCollection * links; 
@property (readonly) DOMHTMLCollection * forms; 
@property (readonly) DOMHTMLCollection * anchors; 
@property (copy,readonly) NSString * lastModified; 
@property (copy) NSString * charset; 
@property (copy,readonly) NSString * defaultCharset; 
@property (copy,readonly) NSString * readyState; 
@property (copy,readonly) NSString * characterSet; 
@property (copy,readonly) NSString * preferredStylesheetSet; 
@property (copy) NSString * selectedStylesheetSet; 
@property (readonly) DOMElement * activeElement; 
-(NSString *)domain;
-(NSString *)URL;
-(id)children;
-(void)setCookie:(NSString *)arg1 ;
-(id)head;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)contentType;
-(id)dir;
-(void)setBody:(DOMHTMLElement *)arg1 ;
-(DOMHTMLElement *)body;
-(BOOL)hidden;
-(id)origin;
-(DOMHTMLCollection *)images;
-(NSString *)lastModified;
-(BOOL)hasFocus;
-(DOMImplementation *)implementation;
-(DOMStyleSheetList *)styleSheets;
-(DOMHTMLCollection *)forms;
-(NSString *)characterSet;
-(id)createElement:(id)arg1 ;
-(BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3 ;
-(id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3 ;
-(DOMDocumentType *)doctype;
-(DOMElement *)documentElement;
-(NSString *)inputEncoding;
-(NSString *)xmlEncoding;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(NSString *)arg1 ;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1 ;
-(NSString *)documentURI;
-(void)setDocumentURI:(NSString *)arg1 ;
-(DOMAbstractView *)defaultView;
-(void)setDir:(id)arg1 ;
-(NSString *)referrer;
-(NSString *)cookie;
-(DOMHTMLCollection *)applets;
-(DOMHTMLCollection *)links;
-(DOMHTMLCollection *)anchors;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(NSString *)defaultCharset;
-(NSString *)readyState;
-(NSString *)preferredStylesheetSet;
-(NSString *)selectedStylesheetSet;
-(void)setSelectedStylesheetSet:(NSString *)arg1 ;
-(DOMElement *)activeElement;
-(id)compatMode;
-(id)visibilityState;
-(id)currentScript;
-(id)scrollingElement;
-(id)firstElementChild;
-(id)lastElementChild;
-(unsigned)childElementCount;
-(id)createDocumentFragment;
-(id)createTextNode:(id)arg1 ;
-(id)createComment:(id)arg1 ;
-(id)createCDATASection:(id)arg1 ;
-(id)createProcessingInstruction:(id)arg1 data:(id)arg2 ;
-(id)createAttribute:(id)arg1 ;
-(id)createEntityReference:(id)arg1 ;
-(id)getElementsByTagName:(id)arg1 ;
-(id)importNode:(id)arg1 deep:(BOOL)arg2 ;
-(id)createElementNS:(id)arg1 qualifiedName:(id)arg2 ;
-(id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2 ;
-(id)adoptNode:(id)arg1 ;
-(id)createEvent:(id)arg1 ;
-(id)createRange;
-(id)createNodeIterator:(id)arg1 whatToShow:(unsigned)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4 ;
-(id)createTreeWalker:(id)arg1 whatToShow:(unsigned)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4 ;
-(id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2 ;
-(id)createExpression:(id)arg1 resolver:(id)arg2 ;
-(id)createNSResolver:(id)arg1 ;
-(id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5 ;
-(BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 ;
-(BOOL)execCommand:(id)arg1 ;
-(BOOL)queryCommandEnabled:(id)arg1 ;
-(BOOL)queryCommandIndeterm:(id)arg1 ;
-(BOOL)queryCommandState:(id)arg1 ;
-(BOOL)queryCommandSupported:(id)arg1 ;
-(id)queryCommandValue:(id)arg1 ;
-(id)getElementsByName:(id)arg1 ;
-(id)elementFromPoint:(int)arg1 y:(int)arg2 ;
-(id)caretRangeFromPoint:(int)arg1 y:(int)arg2 ;
-(id)createCSSStyleDeclaration;
-(id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2 ;
-(id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 ;
-(id)getElementsByClassName:(id)arg1 ;
-(id)getElementById:(id)arg1 ;
-(id)querySelector:(id)arg1 ;
-(id)querySelectorAll:(id)arg1 ;
-(id)createProcessingInstruction:(id)arg1 :(id)arg2 ;
-(id)importNode:(id)arg1 :(BOOL)arg2 ;
-(id)createElementNS:(id)arg1 :(id)arg2 ;
-(id)createAttributeNS:(id)arg1 :(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 :(id)arg2 ;
-(id)createNodeIterator:(id)arg1 :(unsigned)arg2 :(id)arg3 :(BOOL)arg4 ;
-(id)createTreeWalker:(id)arg1 :(unsigned)arg2 :(id)arg3 :(BOOL)arg4 ;
-(id)getOverrideStyle:(id)arg1 :(id)arg2 ;
-(id)createExpression:(id)arg1 :(id)arg2 ;
-(id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5 ;
-(id)getComputedStyle:(id)arg1 :(id)arg2 ;
-(WebFrame *)webFrame;
-(id)URLWithAttributeString:(id)arg1 ;
-(id)_documentRange;
@end
