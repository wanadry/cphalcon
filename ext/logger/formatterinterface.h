
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

extern zend_class_entry *phalcon_logger_formatterinterface_ce;

PHALCON_INIT_CLASS(Phalcon_Logger_FormatterInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_logger_formatterinterface_format, 0, 0, 3)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_INFO(0, timestamp)
ZEND_END_ARG_INFO()

PHALCON_INIT_FUNCS(phalcon_logger_formatterinterface_method_entry){
	PHP_ABSTRACT_ME(Phalcon_Logger_FormatterInterface, format, arginfo_phalcon_logger_formatterinterface_format)
	PHP_FE_END
};

