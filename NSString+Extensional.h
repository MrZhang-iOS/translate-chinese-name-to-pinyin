//
//  NSString+Extensional.h
//  iOSProject
//
//  Created by wei.zhang on 16/4/22.
//  Copyright © 2016年 Gigabud. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extensional)

/*
 *  获取字符串排序的首字母  如 史蒂夫 -> sdf
 *                         曾国藩 -> zgf
 *                         史蒂夫·乔布斯 -> sdfqbs
 *                         沈从wen -> scwen
 *                         Jobs  -> Jobs
 *                         D.J   -> D.J(不作姓名的转换结果)
 *                         I'm  -> I'm
 *
 *  @param isForSurname 标记字符串是否为姓氏，如果为姓氏将使用姓氏对应的拼音首字母且将去掉姓名中的“·”符号（部分姓氏为多音字，发音独特，如曾、单等）
 *
 *  @return 返回字符串的未处理大小写，汉字系统转拼音默认小写，取每个汉字的拼音首字母，如果字符串本身非汉字则保持不变，如英文字母或字符等
 */
- (NSString*)firstLettersForSort:(BOOL)isForSurname;

/*
 *  获取字符串排序的无音调拼音    如 史蒂夫 -> shi di fu
 *                              曾国藩 -> zeng guo fan
 *                              史蒂夫·乔布斯 -> shi di fu qiao bu si
 *                              沈从wen -> shen congwen
 *                              Jobs  -> Jobs
 *                              D.J   -> D.J(不作姓名的转换结果)
 *                              I'm  -> I'm
 *
 *  @param isForSurname 标记字符串是否为姓氏，如果为姓氏将使用姓氏对应的拼音且将替换掉姓名中的“·”符号为“ ”（部分姓氏为多音字，发音独特，如曾、单等）
 *
 *  @return 返回字符串的未处理大小写，汉字系统转拼音默认小写，取每个汉字的拼音，如果字符串本身非汉字则保持不变，如英文字母或字符等
 */
- (NSString*)pinyinForSort:(BOOL)isForSurname;

/*
 *  获取字符串排序的有音调拼音    如 史蒂夫 -> shǐ dì fu
 *                              曾国藩 -> zēng guó fān
 *                              史蒂夫·乔布斯 -> shǐ dì fu qiáo bù sī
 *                              沈从wen -> shěn cóngwen
 *                              Jobs  -> Jobs
 *                              D.J   -> D.J(不作姓名的转换结果)
 *                              I'm  -> I'm
 *
 *  @param isForSurname 标记字符串是否为姓氏，如果为姓氏将使用姓氏对应的拼音且将替换掉姓名中的“·”符号为“ ”（部分姓氏为多音字，发音独特，如曾、单等）
 *
 *  @return 返回字符串的未处理大小写，汉字系统转拼音默认小写，取每个汉字的拼音，如果字符串本身非汉字则保持不变，如英文字母或字符等
 */
- (NSString*)pinyinWithToneForSort:(BOOL)isForSurname;

@end





/*
 *   【效率比较】
 *        iPhone6s firstLettersForSort/pinyinForSort/pinyinWithToneForSort几乎没有差别
 *        iPhone5s及iPhone4 firstLettersForSort处理汉字字符串时较快；pinyinForSort/pinyinWithToneForSort处理非汉字字符串时较快
 */

//NSString* test001 = @"繁国藩";
//NSString* test002 = @"区国藩";
//NSString* test003 = @"仇国藩";
//NSString* test004 = @"史蒂夫·Jobs";
//NSString* test005 = @"种国藩";
//NSString* test006 = @"单国藩";
//NSString* test007 = @"解国藩";
//NSString* test008 = @"查国藩";
//NSString* test009 = @"曾国藩";
//NSString* test010 = @"秘国藩";
//NSString* test011 = @"乐国藩";
//NSString* test012 = @"重国藩";
//NSString* test013 = @"朴国藩";
//NSString* test014 = @"缪国藩";
//NSString* test015 = @"冼国藩";
//NSString* test016 = @"翟国藩";
//NSString* test017 = @"折国藩";
//NSString* test018 = @"黑国藩";
//NSString* test019 = @"盖国藩";
//NSString* test020 = @"沈国藩";
//NSString* test021 = @"尉迟国藩";
//NSString* test022 = @"万俟国藩";
//
//NSLog(@"%@", [test001 firstLettersForSort:NO]);
//NSLog(@"%@", [test002 firstLettersForSort:NO]);
//NSLog(@"%@", [test003 firstLettersForSort:NO]);
//NSLog(@"%@", [test004 firstLettersForSort:NO]);
//NSLog(@"%@", [test005 firstLettersForSort:NO]);
//NSLog(@"%@", [test006 firstLettersForSort:NO]);
//NSLog(@"%@", [test007 firstLettersForSort:NO]);
//NSLog(@"%@", [test008 firstLettersForSort:NO]);
//NSLog(@"%@", [test009 firstLettersForSort:NO]);
//NSLog(@"%@", [test010 firstLettersForSort:NO]);
//NSLog(@"%@", [test011 firstLettersForSort:NO]);
//NSLog(@"%@", [test012 firstLettersForSort:NO]);
//NSLog(@"%@", [test013 firstLettersForSort:NO]);
//NSLog(@"%@", [test014 firstLettersForSort:NO]);
//NSLog(@"%@", [test015 firstLettersForSort:NO]);
//NSLog(@"%@", [test016 firstLettersForSort:NO]);
//NSLog(@"%@", [test017 firstLettersForSort:NO]);
//NSLog(@"%@", [test018 firstLettersForSort:NO]);
//NSLog(@"%@", [test019 firstLettersForSort:NO]);
//NSLog(@"%@", [test020 firstLettersForSort:NO]);
//NSLog(@"%@", [test021 firstLettersForSort:NO]);
//NSLog(@"%@", [test022 firstLettersForSort:NO]);
//
//NSLog(@"%@", [test001 pinyinForSort:NO]);
//NSLog(@"%@", [test002 pinyinForSort:NO]);
//NSLog(@"%@", [test003 pinyinForSort:NO]);
//NSLog(@"%@", [test004 pinyinForSort:NO]);
//NSLog(@"%@", [test005 pinyinForSort:NO]);
//NSLog(@"%@", [test006 pinyinForSort:NO]);
//NSLog(@"%@", [test007 pinyinForSort:NO]);
//NSLog(@"%@", [test008 pinyinForSort:NO]);
//NSLog(@"%@", [test009 pinyinForSort:NO]);
//NSLog(@"%@", [test010 pinyinForSort:NO]);
//NSLog(@"%@", [test011 pinyinForSort:NO]);
//NSLog(@"%@", [test012 pinyinForSort:NO]);
//NSLog(@"%@", [test013 pinyinForSort:NO]);
//NSLog(@"%@", [test014 pinyinForSort:NO]);
//NSLog(@"%@", [test015 pinyinForSort:NO]);
//NSLog(@"%@", [test016 pinyinForSort:NO]);
//NSLog(@"%@", [test017 pinyinForSort:NO]);
//NSLog(@"%@", [test018 pinyinForSort:NO]);
//NSLog(@"%@", [test019 pinyinForSort:NO]);
//NSLog(@"%@", [test020 pinyinForSort:NO]);
//NSLog(@"%@", [test021 pinyinForSort:NO]);
//NSLog(@"%@", [test022 pinyinForSort:NO]);
//
//NSLog(@"%@", [test001 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test002 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test003 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test004 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test005 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test006 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test007 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test008 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test009 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test010 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test011 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test012 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test013 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test014 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test015 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test016 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test017 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test018 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test019 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test020 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test021 pinyinWithToneForSort:NO]);
//NSLog(@"%@", [test022 pinyinWithToneForSort:NO]);
//
//
//
//NSLog(@"%@", [test001 firstLettersForSort:YES]);
//NSLog(@"%@", [test002 firstLettersForSort:YES]);
//NSLog(@"%@", [test003 firstLettersForSort:YES]);
//NSLog(@"%@", [test004 firstLettersForSort:YES]);
//NSLog(@"%@", [test005 firstLettersForSort:YES]);
//NSLog(@"%@", [test006 firstLettersForSort:YES]);
//NSLog(@"%@", [test007 firstLettersForSort:YES]);
//NSLog(@"%@", [test008 firstLettersForSort:YES]);
//NSLog(@"%@", [test009 firstLettersForSort:YES]);
//NSLog(@"%@", [test010 firstLettersForSort:YES]);
//NSLog(@"%@", [test011 firstLettersForSort:YES]);
//NSLog(@"%@", [test012 firstLettersForSort:YES]);
//NSLog(@"%@", [test013 firstLettersForSort:YES]);
//NSLog(@"%@", [test014 firstLettersForSort:YES]);
//NSLog(@"%@", [test015 firstLettersForSort:YES]);
//NSLog(@"%@", [test016 firstLettersForSort:YES]);
//NSLog(@"%@", [test017 firstLettersForSort:YES]);
//NSLog(@"%@", [test018 firstLettersForSort:YES]);
//NSLog(@"%@", [test019 firstLettersForSort:YES]);
//NSLog(@"%@", [test020 firstLettersForSort:YES]);
//NSLog(@"%@", [test021 firstLettersForSort:YES]);
//NSLog(@"%@", [test022 firstLettersForSort:YES]);
//
//NSLog(@"%@", [test001 pinyinForSort:YES]);
//NSLog(@"%@", [test002 pinyinForSort:YES]);
//NSLog(@"%@", [test003 pinyinForSort:YES]);
//NSLog(@"%@", [test004 pinyinForSort:YES]);
//NSLog(@"%@", [test005 pinyinForSort:YES]);
//NSLog(@"%@", [test006 pinyinForSort:YES]);
//NSLog(@"%@", [test007 pinyinForSort:YES]);
//NSLog(@"%@", [test008 pinyinForSort:YES]);
//NSLog(@"%@", [test009 pinyinForSort:YES]);
//NSLog(@"%@", [test010 pinyinForSort:YES]);
//NSLog(@"%@", [test011 pinyinForSort:YES]);
//NSLog(@"%@", [test012 pinyinForSort:YES]);
//NSLog(@"%@", [test013 pinyinForSort:YES]);
//NSLog(@"%@", [test014 pinyinForSort:YES]);
//NSLog(@"%@", [test015 pinyinForSort:YES]);
//NSLog(@"%@", [test016 pinyinForSort:YES]);
//NSLog(@"%@", [test017 pinyinForSort:YES]);
//NSLog(@"%@", [test018 pinyinForSort:YES]);
//NSLog(@"%@", [test019 pinyinForSort:YES]);
//NSLog(@"%@", [test020 pinyinForSort:YES]);
//NSLog(@"%@", [test021 pinyinForSort:YES]);
//NSLog(@"%@", [test022 pinyinForSort:YES]);
//
//NSLog(@"%@", [test001 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test002 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test003 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test004 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test005 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test006 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test007 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test008 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test009 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test010 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test011 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test012 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test013 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test014 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test015 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test016 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test017 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test018 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test019 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test020 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test021 pinyinWithToneForSort:YES]);
//NSLog(@"%@", [test022 pinyinWithToneForSort:YES]);