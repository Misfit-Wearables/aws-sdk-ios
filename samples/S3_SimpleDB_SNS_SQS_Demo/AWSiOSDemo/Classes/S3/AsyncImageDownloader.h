/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <AWSiOSSDK/AmazonServiceRequest.h>

@interface AsyncImageDownloader:NSOperation<AmazonServiceRequestDelegate>
{
    int            imageNo;
    UIProgressView *progressView;
    UIImageView    *imageView;

    BOOL           isExecuting;
    BOOL           isFinished;
}

-(id)initWithImageNo:(int)theImageNo progressView:(UIProgressView *)theProgressView imageview:(UIImageView *)theImageView;
-(void)finish;
-(void)initialize;
-(void)updateProgressView:(NSNumber *)theProgress;
-(void)hideProgressView;
-(void)setImage:(UIImage *)theImage;

@end
