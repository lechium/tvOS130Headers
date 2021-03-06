/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITabularDataCellItem.h>
#import <SiriTVUI/NSCopying.h>

@class SiriTVUITemplateItem;

@interface SiriTVUITabularDataTemplateCellItem : SiriTVUITabularDataCellItem <NSCopying> {

	SiriTVUITemplateItem* _templateItem;

}

@property (nonatomic,retain) SiriTVUITemplateItem * templateItem;              //@synthesize templateItem=_templateItem - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SiriTVUITemplateItem *)templateItem;
-(void)setTemplateItem:(SiriTVUITemplateItem *)arg1 ;
-(id)initWithTemplateItem:(id)arg1 ;
@end

