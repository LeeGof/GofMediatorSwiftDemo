//
//  NSData+GofEncrypt.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCrypto.h>

@interface NSData (GofEncrypt)

/**
 *  对NSData类进行Json解析
 *
 *  @return 解析后数据  （一般为字典）
 */
- (id)gof_JSONObject;

/*!
 *  将二进制转换成字符串
 *
 *  @return 字符串
 */
- (NSString *)gof_toString;

/*!
 *  将string文本转换成base64二进制
 *
 *  @return base64二进制
 */
+ (NSData *)gof_base64DataFromString:(NSString *)string;

/**
 * MD加密算法
 */
- (NSData *)gof_MD2;
- (NSData *)gof_MD4;
- (NSData *)gof_MD5;
- (NSString*)gof_md5String;

/**
 * SHA加密算法
 */
- (NSData *)gof_SHA1;
- (NSData *)gof_SHA224;
- (NSData *)gof_SHA256;
- (NSData *)gof_SHA384;
- (NSData *)gof_SHA512;

/**
 AES256加密/解密

 @param key 密钥
 @return 加密数据
 */
- (NSData *)gof_aes256Encrypt:(NSString *)key;
- (NSData *)gof_aes256Decrypt:(NSString *)key;

/**
 * AES256加密与解密
 */
- (NSData *)gof_AES256EncryptedUsingKey:(id)key error:(NSError **)error;
- (NSData *)gof_AES256DecryptedUsingKey:(id)key error:(NSError **)error;

/**
 * DES加密与解密
 */
- (NSData *)gof_DESEncryptedUsingKey:(id)key error:(NSError **)error;
- (NSData *)gof_DESDecryptedUsingKey:(id)key error:(NSError **)error;

/**
 * CAST加密与解密
 */
- (NSData *)gof_CASTEncryptedUsingKey:(id)key error:(NSError **)error;
- (NSData *)gof_CASTDecryptedUsingKey:(id)key error:(NSError **)error;

/**
 * 弱加密算法
 */
- (NSData *)gof_dataEncryptedUsingAlgorithm:(CCAlgorithm)algorithm
                                        key:(id)key		// data or string
                                      error:(CCCryptorStatus *)error;
- (NSData *)gof_dataEncryptedUsingAlgorithm:(CCAlgorithm)algorithm
                                        key:(id)key		// data or string
                                    options:(CCOptions) options
                                      error:(CCCryptorStatus *) error;
- (NSData *)gof_dataEncryptedUsingAlgorithm:(CCAlgorithm) algorithm
                                        key:(id)key		// data or string
                       initializationVector:(id)iv		// data or string
                                    options:(CCOptions)options
                                      error:(CCCryptorStatus *)error;

- (NSData *)gof_decryptedDataUsingAlgorithm:(CCAlgorithm)algorithm
                                        key:(id)key		// data or string
                                      error:(CCCryptorStatus *)error;
- (NSData *)gof_decryptedDataUsingAlgorithm:(CCAlgorithm)algorithm
                                        key:(id)key		// data or string
                                    options:(CCOptions)options
                                      error:(CCCryptorStatus *)error;
- (NSData *)gof_decryptedDataUsingAlgorithm:(CCAlgorithm)algorithm
                                        key:(id)key		// data or string
                       initializationVector:(id)iv		// data or string
                                    options:(CCOptions)options
                                      error:(CCCryptorStatus *)error;

@end
