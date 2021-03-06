/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMUIEvent.h>

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent

@property (copy,readonly) NSString * keyIdentifier; 
@property (readonly) unsigned location; 
@property (readonly) unsigned keyLocation; 
@property (readonly) BOOL ctrlKey; 
@property (readonly) BOOL shiftKey; 
@property (readonly) BOOL altKey; 
@property (readonly) BOOL metaKey; 
@property (readonly) BOOL altGraphKey; 
@property (readonly) int keyCode; 
@property (readonly) int charCode; 
-(int)keyCode;
-(unsigned)location;
-(NSString *)keyIdentifier;
-(unsigned)keyLocation;
-(BOOL)ctrlKey;
-(BOOL)shiftKey;
-(BOOL)altKey;
-(BOOL)metaKey;
-(BOOL)altGraphKey;
-(int)charCode;
-(BOOL)getModifierState:(id)arg1 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11 ;
-(void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 ;
@end

