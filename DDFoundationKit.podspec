Pod::Spec.new do |s|
  s.name         = 'DDFoundationKit'
  s.version      = '1.0.0'
  s.summary      = "DDFoundationKit"
  s.homepage     = 'https://github.com/evan-dev-d/DDFoundationKit.git'
  s.author       = { 'evan' => '448765508@qq.com' }
  s.source       = { :git => "https://github.com/evan-dev-d/DDFoundationKit.git", :tag => s.version }
  s.platform     = :ios, '15.0'
  s.requires_arc = true

  s.user_target_xcconfig = {
    'GENERATE_INFOPLIST_FILE' => 'YES'
  }

  s.pod_target_xcconfig = {
    'GENERATE_INFOPLIST_FILE' => 'YES'
  }

  s.subspec 'DDKit' do |ss|
    ss.source_files        = 'DDKit/interface/**/*.h'
    ss.preserve_paths      = 'DDKit/DDKit.xcframework'
    ss.vendored_framework  = 'DDKit/DDKit.xcframework'
    ss.xcconfig = { 'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/DDFoundationKit/DDKit/interface"', 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/DDFoundationKit/DDKit"'}
  end

  s.subspec 'DDKit_PHASE' do |ss|
    ss.source_files         = 'DDKit_PHASE/interface/**/*.h'
    ss.preserve_paths       = 'DDKit_PHASE/DDKit_PHASE.xcframework'
    ss.vendored_framework   = 'DDKit_PHASE/DDKit_PHASE.xcframework'
    ss.xcconfig = { 'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/DDFoundationKit/DDKit_PHASE/interface"', 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/DDFoundationKit/DDKit_PHASE"'}
  end

  s.default_subspec = 'DDKit'
end
