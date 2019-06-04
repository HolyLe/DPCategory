#
#  Be sure to run `pod spec lint DPCategory.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

 

  s.name         = "DPCategory"
  s.version      = "0.0.1"
  s.summary      = "面向对象的网络编程框架"




  s.homepage     = "https://github.com/HolyLe/DPCategory.git"





  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }

   s.author       = { "麻小亮" => "zshnr1993@qq.com" }
   s.platform     = :ios, "8.0"
   s.ios.deployment_target = "8.0"

   s.source       = { :git => "https://github.com/HolyLe/DPCategory.git", :tag =>          s.version.to_s } 


  s.source_files  = "DPCategory/DPCategory/DPCategory/**/*.{h,m}"

  s.framework  = "UIKit,ImageIO,WebKit,QuartzCore,Accelerate"


end
