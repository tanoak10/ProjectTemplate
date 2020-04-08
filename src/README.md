源代码放置在`src`文件夹下，里面有若干模块：

```
src
|
|-- Service				# 服务层
|	|-- StudentService.cpp			# 服务层
|	|-- StudentService.h
|
|
|-- Dao				# Dao层
|	|-- StudentDao.cpp			# Dao层
|	|-- StudentDao.h
|
|
|-- Util				# 工具模块
	|-- File.cpp			# 文件/目录操作模块
	|-- File.h
	|-- function_traits.h		# 函数、lambda转functional
	|-- logger.h			# 日志模块
	|-- MD5.cpp			# md5加密模块
	|-- MD5.h
	|-- mini.h			# ini配置文件读写模块，支持unix/windows格式的回车符
	|-- NoticeCenter.h		# 消息广播器，可以广播传递任意个数任意类型参数
	|-- onceToken.h			# 使用RAII模式实现，可以在对象构造和析构时执行一段代码
	|-- ResourcePool.h		# 基于智能指针实现的一个循环池，不需要手动回收对象
	|-- RingBuffer.h		# 环形缓冲，可以自适应大小，适用于GOP缓存等
	|-- TimeTicker.h		# 计时器，可以用于统计函数执行时间
	|-- util.cpp			# 其他一些工具代码，适配了多种系统
	|-- util.h
	|-- uv_errno.cpp		# 提取自libuv的错误代码系统，主要是为了兼容windows
	|-- uv_errno.h
	
``` 


