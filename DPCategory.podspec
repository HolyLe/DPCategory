#
#  Be sure to run `pod spec lint DPCategory.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

 

   s.name         = "DPCategory"
   s.version      = "0.0.2"
   s.summary      = "链式UI创建与分类集合"

 
   s.homepage     = "https://github.com/HolyLe/DPCategory.git"
   s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }

   s.author       = { "麻小亮" => "zshnr1993@qq.com" }
   s.platform     = :ios, "8.0"
   s.ios.deployment_target = '8.0' 
   s.requires_arc = true

   s.source       = { :git => "https://github.com/HolyLe/DPCategory.git", :tag =>          s.version.to_s } 

  s.public_header_files = 'DPCategory/DPCategory/DPCategory.h'
  s.source_files = 'DPCategory/DPCategory/DPCategory.h'

  s.subspec 'Categories' do |ss|
    ss.framework  = "UIKit","ImageIO","WebKit","QuartzCore"
     ss.public_header_files = 'DPCategory/DPCategory/Categories/DPDefine.h'
    ss.source_files = 'DPCategory/DPCategory/Categories/**/*.{h,m}'
  end

  s.subspec 'DPChain' do |ss|
    
    ss.source_files = 'DPCategory/DPCategory/DPChain/**/*.{h,m}'
    ss.dependency 'DPCategory/Categories'
  end
    


end
