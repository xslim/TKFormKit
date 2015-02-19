Pod::Spec.new do |s|
  s.name             = "TKFormKit"
  s.version          = "0.0.4"
  s.summary          = "Easy way to create forms"
  s.homepage         = "https://github.com/xslim/TKFormKit"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Taras Kalapun" => "t.kalapun@gmail.com" }
  s.source           = { :git => "https://github.com/xslim/TKFormKit.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/xslim'

  s.platform     = :ios, '6.1'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*.{h,m}'

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit'
end
