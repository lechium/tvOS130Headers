/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/KSForwardingWriter.h>

@class KSXMLAttributes, NSMutableArray, KSXMLElementContentsProxy, NSArray;

@interface KSXMLWriter : KSForwardingWriter {

	KSXMLAttributes* _attributes;
	NSMutableArray* _openElements;
	BOOL _elementIsEmpty;
	unsigned long long _inlineWritingLevel;
	KSXMLElementContentsProxy* _contentsProxy;
	long long _indentation;
	unsigned long long _encoding;

}

@property (assign,nonatomic) unsigned long long encoding;                  //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                   //@synthesize indentation=_indentation - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * openElements; 
+(void)initialize;
+(id)stringFromCharacters:(id)arg1 ;
+(id)stringFromAttributeValue:(id)arg1 ;
-(void)close;
-(unsigned long long)encoding;
-(void)flush;
-(void)endElement;
-(void)setEncoding:(unsigned long long)arg1 ;
-(void)writeString:(id)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(long long)indentationLevel;
-(id)currentAttributes;
-(id)initWithOutputWriter:(id)arg1 ;
-(void)startNewline;
-(void)writeStringByEscapingXMLEntities:(id)arg1 escapeQuot:(BOOL)arg2 ;
-(void)writeCharacters:(id)arg1 ;
-(void)startElement:(id)arg1 ;
-(void)startElement:(id)arg1 attributes:(id)arg2 ;
-(BOOL)canWriteElementInline:(id)arg1 ;
-(void)startElement:(id)arg1 writeInline:(BOOL)arg2 ;
-(void)stopWritingInline;
-(void)willStartElement:(id)arg1 ;
-(void)pushElement:(id)arg1 ;
-(void)startWritingInline;
-(void)didStartElement;
-(void)increaseIndentationLevel;
-(void)pushAttribute:(id)arg1 value:(id)arg2 ;
-(void)decreaseIndentationLevel;
-(BOOL)isWritingInline;
-(void)popElement;
-(void)closeEmptyElementTag;
-(id)topElement;
-(void)writeEndTag:(id)arg1 ;
-(void)writeAttributeValue:(id)arg1 ;
-(void)openComment;
-(void)closeComment;
-(BOOL)elementCanBeEmpty:(id)arg1 ;
-(void)closeStartTag;
-(unsigned long long)openElementsCount;
-(id)initWithOutputWriter:(id)arg1 encoding:(unsigned long long)arg2 ;
-(void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)writeElement:(id)arg1 contentsInvocationTarget:(id)arg2 ;
-(void)writeElement:(id)arg1 text:(id)arg2 ;
-(BOOL)hasCurrentAttributes;
-(void)writeAttribute:(id)arg1 value:(id)arg2 ;
-(void)writeComment:(id)arg1 ;
-(void)startCDATA;
-(void)endCDATA;
-(BOOL)validateElement:(id)arg1 ;
-(id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3 ;
-(NSArray *)openElements;
-(BOOL)hasOpenElement:(id)arg1 ;
@end
