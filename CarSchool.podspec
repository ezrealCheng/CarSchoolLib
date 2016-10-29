

Pod::Spec.new do |s|

  s.name         = "CarSchool"
  s.version      = "0.0.2"
  s.summary      = "CarSchool is myself first test object"

  s.homepage     = "https://github.com/ezrealCheng/CarSchoolLib"




  s.license      = "MIT"


  s.author             = { "程宜" => "ezreal_cheng@sina.com" }
  s.source       = { :git => "https://github.com/ezrealCheng/CarSchoolLib.git", :tag => "#{s.version}" }

s.platform = :ios

s.vendored_libraries = 'libCarSchoolLib.a'
s.dependency 'AFNetworking'
s.dependency 'IQKeyboardManager'
s.dependency 'SDCycleScrollView'
s.dependency 'SVProgressHUD'
s.dependency 'SDWebImage'
s.dependency 'MJExtension'
s.dependency 'SDAutoLayout'
s.dependency 'AFNetworking'
s.dependency 'HMSegmentedControl'
s.dependency 'SVProgressHUD'

  #s.source_files  = "Classes", "Classes/**/*.{h,m}"
  #s.exclude_files = "Classes/Exclude"
#s.public_header_files = 'CarSchoolLib/*.h'
  s.subspec 'CarSchoolLib' do |ss|
        ss.source_files = 'CarSchoolLib/*.h'
ss.public_header_files = 'CarSchoolLib/*.h'
  end


end
