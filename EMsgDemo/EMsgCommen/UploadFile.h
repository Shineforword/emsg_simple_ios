//
//  UploadFile.h
//  02.Post上传
//
//  Created by apple on 14-4-29.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Singleon.h"
//#import "AFHTTPRequestOperationManager.h"
#import "AFHTTPSessionManager.h"
typedef void(^audioBlock)(NSDictionary *audioDict);
/**  文件服务器 AppID APPKey*/
#define FILE_SERVER_APP_ID @"test"
#define FILE_SERVER_APP_KEY @"83bf20e2b20141e098fa6b721f693163"
#define FILE_SERVER_HOST @"http://fileserver.lczybj.com/fileserver/upload/"

@interface UploadFile : NSObject
single_interface(UploadFile)

- (void)uploadImage : (UIImage *)image resultBlock
                    : (void (^)(NSDictionary *))block upProgress
                    : (void (^)(float))progressBlock;
- (void)uploadAudio:(NSString *)dataStr block:(audioBlock)audio;
@end
