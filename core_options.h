/*
 *  Copyright (C) 2020-2021 Bernhard Schelling
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

static retro_core_option_definition option_defs[] =
{
	{
		"dosbox_pure_advanced",
		"显示高级选项",
		"关闭并重新打开菜单以刷新此选项页面.",
		{ { "false", "关" }, { "true", "开" } },
		"false"
	},
	{
		"dosbox_pure_savestate",
		"支持即时存档",
		"一定要在使用每个游戏之前对其进行测试. 复杂的后期DOS游戏可能会出现问题" "\n"
		"请注意: 无法加载使用不同视频或CPU设置保存的状态." "\n"
		"倒带支持需要耗费很高的性能, 设置它需要完全重启内核." "\n"
		"保存状态可能与此核心将来的新版本不兼容." "\n\n", //end of top section
		{
			{ "on",       "启用即时存档" },
			{ "rewind",   "启用即时存档和倒带功能" },
			{ "disabled", "禁用" },
		},
		"on"
	},

	// Input
	{
		"dosbox_pure_bind_unused",
		"输入 > 绑定未使用的按钮",
		"将所有未使用的控制器按钮绑定到键盘键. 可以在核心设置的控制部分中重新映射.",
		{ { "true", "开" }, { "false", "关" } },
		"true"
	},
	{
		"dosbox_pure_on_screen_keyboard",
		"输入 > 启用屏幕键盘",
		"启用可以通过控制器上的L3按钮激活的屏幕键盘功能.",
		{ { "true", "开" }, { "false", "关" } },
		"true"
	},
	{
		"dosbox_pure_mouse_wheel",
		"输入 > 将鼠标滚轮绑定到键盘",
		"将鼠标滚轮上下绑定至两个键盘键, 以便能够在DOS游戏中使用.",
		{
			{ "67/68", "Left-Bracket/Right-Bracket" },
			{ "72/71", "Comma/Period" },
			{ "79/82", "Page-Up/Page-Down" },
			{ "78/81", "Home/End" },
			{ "80/82", "Delete/Page-Down" },
			{ "64/65", "Minus/Equals" },
			{ "69/70", "Semicolon/Quote" },
			{ "99/100", "Numpad Minus/Plus" },
			{ "97/98", "Numpad Divide/Multiply" },
			{ "84/85", "Up/Down" },
			{ "83/86", "Left/Right" },
			{ "11/13", "Q/E" },
			{ "none", "关闭" },
		},
		"67/68"
	},
	{
		"dosbox_pure_mouse_speed_factor",
		"输入 > 鼠标灵敏度",
		"设置鼠标光标的整体移动速度." "\n\n", //end of Input section
		{
			{ "0.2",  "20%" }, { "0.25",  "25%" }, { "0.3",  "30%" }, { "0.35",  "35%" }, { "0.4",  "40%" }, { "0.45",  "45%" },
			{ "0.5",  "50%" }, { "0.55",  "55%" }, { "0.6",  "60%" }, { "0.65",  "65%" }, { "0.7",  "70%" }, { "0.75",  "75%" },
			{ "0.8",  "80%" }, { "0.85",  "85%" }, { "0.9",  "90%" }, { "0.95",  "95%" }, { "1.0", "100%" }, { "1.1" , "110%" },
			{ "1.2", "120%" }, { "1.3" , "130%" }, { "1.4", "140%" }, { "1.5" , "150%" }, { "1.6", "160%" }, { "1.7" , "170%" },
			{ "1.8", "180%" }, { "1.9" , "190%" }, { "2.0", "200%" }, { "2.2" , "220%" }, { "2.4", "240%" }, { "2.6" , "260%" },
			{ "2.8", "280%" }, { "3.0" , "300%" }, { "3.2", "320%" }, { "3.4" , "340%" }, { "3.6", "360%" }, { "3.8" , "380%" },
			{ "4.0", "400%" }, { "4.2" , "420%" }, { "4.4", "440%" }, { "4.6",  "460%" }, { "4.8", "480%" }, { "5.0",  "500%" },
		},
		"1.0"
	},
	{
		"dosbox_pure_mouse_speed_factor_x",
		"输入 > 高级 > 水平鼠标灵敏度.",
		"如果在向左/向右移动时鼠标太快/太慢, 请使用此值进行实验.",
		{
			{ "0.2",  "20%" }, { "0.25",  "25%" }, { "0.3",  "30%" }, { "0.35",  "35%" }, { "0.4",  "40%" }, { "0.45",  "45%" },
			{ "0.5",  "50%" }, { "0.55",  "55%" }, { "0.6",  "60%" }, { "0.65",  "65%" }, { "0.7",  "70%" }, { "0.75",  "75%" },
			{ "0.8",  "80%" }, { "0.85",  "85%" }, { "0.9",  "90%" }, { "0.95",  "95%" }, { "1.0", "100%" }, { "1.1" , "110%" },
			{ "1.2", "120%" }, { "1.3" , "130%" }, { "1.4", "140%" }, { "1.5" , "150%" }, { "1.6", "160%" }, { "1.7" , "170%" },
			{ "1.8", "180%" }, { "1.9" , "190%" }, { "2.0", "200%" }, { "2.2" , "220%" }, { "2.4", "240%" }, { "2.6" , "260%" },
			{ "2.8", "280%" }, { "3.0" , "300%" }, { "3.2", "320%" }, { "3.4" , "340%" }, { "3.6", "360%" }, { "3.8" , "380%" },
			{ "4.0", "400%" }, { "4.2" , "420%" }, { "4.4", "440%" }, { "4.6",  "460%" }, { "4.8", "480%" }, { "5.0",  "500%" },
		},
		"1.0"
	},
	{
		"dosbox_pure_mouse_input",
		"输入 > 高级 > 使用鼠标输入",
		"可以禁用鼠标或触摸屏的输入处理 (通过手柄模拟的鼠标仍然可以使用).",
		{ { "true", "开 (默认)" }, { "false", "关" } },
		"true"
	},
	{
		"dosbox_pure_auto_mapping",
		"输入 > 高级 > 自动游戏手柄映射",
		"DOSBox Pure在检测到游戏时可以自动应用游戏手柄控件映射方案." "\n"
		"这些按钮映射由Keyb2Joypad项目提供 (提供者为Jemy Murphy和bigjim).",
		{ { "true", "开 (默认)" }, { "notify", "启用游戏检测通知" }, { "false", "关" } },
		"true"
	},
	{
		"dosbox_pure_keyboard_layout",
		"输入 > 高级 > 键盘布局",
		"选择键盘布局(不会更改屏幕键盘).",
		{
			{ "us",    "US (默认)" },
			{ "uk",    "UK" },
			{ "br",    "Brazil" },
			{ "hr",    "Croatia" },
			{ "cz243", "Czech Republic" },
			{ "dk",    "Denmark" },
			{ "su",    "Finland" },
			{ "fr",    "France" },
			{ "gr",    "Germany" },
			{ "gk",    "Greece" },
			{ "hu",    "Hungary" },
			{ "is161", "Iceland" },
			{ "it",    "Italy" },
			{ "nl",    "Netherlands" },
			{ "no",    "Norway" },
			{ "pl",    "Poland" },
			{ "po",    "Portugal" },
			{ "ru",    "Russia" },
			{ "sk",    "Slovakia" },
			{ "si",    "Slovenia" },
			{ "sp",    "Spain" },
			{ "sv",    "Sweden" },
			{ "sg",    "Switzerland (德)" },
			{ "sf",    "Switzerland (法)" },
			{ "tr",    "Turkey" },
		},
		"us"
	},
	{
		"dosbox_pure_joystick_analog_deadzone",
		"输入 > 游戏杆模拟死区",
		"设置操纵杆模拟摇杆的死区. 可用于消除因未正确校准的操纵杆硬件而引起的漂移.",
		{
         { "0",  "0%" },
         { "5",  "5%" },
         { "10", "10%" },
         { "15", "15%" },
         { "20", "20%" },
         { "25", "25%" },
         { "30", "30%" },
         { "35", "35%" },
         { "40", "40%" },
         { NULL, NULL },
		},
		"15"
	},
	{
		"dosbox_pure_joystick_timed",
		"输入>高级>启用手柄定时间隔",
		"为操纵杆轴启用定时间隔. 如果操纵杆漂移, 请尝试使用此选项." "\n\n", //end of Input > Advanced section
		{ { "true", "开 (默认)" }, { "false", "关" } },
		"true"
	},

	// Performance
	{
		"dosbox_pure_cycles_scale",
		"性能 > 性能量表",
		"针对特定需求微调模拟性能.",
		{
			{ "0.2",  "20%" }, { "0.25",  "25%" }, { "0.3",  "30%" }, { "0.35",  "35%" }, { "0.4",  "40%" }, { "0.45",  "45%" },
			{ "0.5",  "50%" }, { "0.55",  "55%" }, { "0.6",  "60%" }, { "0.65",  "65%" }, { "0.7",  "70%" }, { "0.75",  "75%" },
			{ "0.8",  "80%" }, { "0.85",  "85%" }, { "0.9",  "90%" }, { "0.95",  "95%" }, { "1.0", "100%" }, { "1.05", "105%" },
			{ "1.1", "110%" }, { "1.15", "115%" }, { "1.2", "120%" }, { "1.25", "125%" }, { "1.3", "130%" }, { "1.35", "135%" },
			{ "1.4", "140%" }, { "1.45", "145%" }, { "1.5", "150%" }, { "1.55", "155%" }, { "1.6", "160%" }, { "1.65", "165%" },
			{ "1.7", "170%" }, { "1.75", "175%" }, { "1.8", "180%" }, { "1.85", "185%" }, { "1.9", "190%" }, { "1.95", "195%" },
			{ "2.0", "200%" },
		},
		"1.0",
	},
	{
		"dosbox_pure_cycles",
		"性能 > 模拟性能",
		"DOSBox将尝试模仿的原始性能." "\n\n", //end of Performance section
		{
			{ "auto",    "自动 - DOSBox将尝试检测性能需求 (默认)" },
			{ "max",     "最大 - 模拟尽可能多的指令" },
			{ "315",     "8086/8088, 4.77 MHz from 1980 (315 cps)" },
			{ "1320",    "286, 6 MHz from 1982 (1320 cps)" },
			{ "2750",    "286, 12.5 MHz from 1985 (2750 cps)" },
			{ "4720",    "386, 20 MHz from 1987 (4720 cps)" },
			{ "7800",    "386DX, 33 MHz from 1989 (7800 cps)" },
			{ "13400",   "486DX, 33 MHz from 1990 (13400 cps)" },
			{ "26800",   "486DX2, 66 MHz from 1992 (26800 cps)" },
			{ "77000",   "Pentium, 100 MHz from 1995 (77000 cps)" },
			{ "200000",  "Pentium II, 300 MHz from 1997 (200000 cps)" },
			{ "500000",  "Pentium III, 600 MHz from 1999 (500000 cps)" },
			{ "1000000", "AMD Athlon, 1.2 GHz from 2000 (1000000 cps)" },
		},
		"auto"
	},

	// Video
	{
		"dosbox_pure_cga",
		"视频 > CGA模式",
		"正在模拟的CGA版本.",
		{
			{ "early_auto", "早期模式, 复合模式自动 (默认)" },
			{ "early_on",   "早期模式, 复合模式开启" },
			{ "early_off",  "早期模式, 复合模式关闭" },
			{ "late_auto", "后期模式, 复合模式自动" },
			{ "late_on",   "后期模式, 复合模式开启" },
			{ "late_off",  "后期模式, 复合模式关闭" },
		},
		"early_auto"
	},
	{
		"dosbox_pure_hercules",
		"视频 > Hercules色彩模式",
		"Hercules模拟的配色方案.",
		{
			{ "white", "黑&白 (默认)" },
			{ "amber", "黑&琥珀色" },
			{ "green", "黑&绿" },
		},
		"white"
	},
	{
		"dosbox_pure_svga",
		"视频 > SVGA模式(需要重新启动)",
		"正在仿真的SVGA版本. 如果遇到图形错误, 请尝试更改.",
		{
			{ "svga_s3",       "S3 Trio64 (默认)" },
			{ "vesa_nolfb",    "S3 Trio64 no-line buffer hack (减少某些游戏中的闪烁)" },
			{ "vesa_oldvbe",   "S3 Trio64 VESA 1.3" },
			{ "svga_et3000",   "Tseng Labs ET3000" },
			{ "svga_et4000",   "Tseng Labs ET4000" },
			{ "svga_paradise", "Paradise PVGA1A" },
		},
		"s3"
	},
	{
		"dosbox_pure_machine",
		"视频 > 模拟的图形芯片 (需要重新启动)",
		"DOSBox将模拟的图形芯片的类型.",
		{
			{ "svga",     "SVGA (超级视频图形阵列) (默认)" },
			{ "vga",      "VGA (视频图形阵列)" },
			{ "ega",      "EGA (增强的图形适配器" },
			{ "cga",      "CGA (彩色图形适配器)" },
			{ "tandy",    "Tandy (Tandy图形适配器" },
			{ "hercules", "Hercules (Hercules图形卡)" },
			{ "pcjr",     "PCjr" },
		},
		"svga"
	},
	{
		"dosbox_pure_aspect_correction",
		"视频 > 宽高比校正",
		"启用后, 核心的宽高比将设置为CRT监视器显示的内容." "\n\n", //end of Video section
		{ { "false", "关 (默认)" }, { "true", "开" } },
		"false"
	},

	// System
	{
		"dosbox_pure_memory_size",
		"系统 > 内存大小 (需要重新启动)",
		"模拟机具有的(最高) 内存. 还可以禁用扩展内存 (EMS/XMS).",
		{
			{ "none", "禁用扩展内存 (无EMS/XMS)" },
			{ "4",  "4 MB" },
			{ "8",  "8 MB" },
			{ "16", "16 MB (默认)" },
			{ "24", "24 MB" },
			{ "32", "32 MB" },
			{ "48", "48 MB" },
			{ "64", "64 MB" },
		},
		"16"
	},
	{
		"dosbox_pure_cpu_type",
		"系统 > CPU类型",
		"模拟的CPU类型. 自动是最快的选择." "\n"
			"需要选择特定CPU类型的游戏:" "\n"
			"386 (预取): X-Men: Madness in The Murderworld, Terminator 1, Contra, Fifa International Soccer 1994" "\n"
			"486 (慢): Betrayal in Antara" "\n"
			"Pentium (慢): Fifa International Soccer 1994, Windows 95/Windows 3.x games" "\n\n", //end of System section
		{
			{ "auto", "自动 - 具有最佳性能和兼容性的混合功能集" },
			{ "386", "386 - 386具有快速内存访问的指令" },
			{ "386_slow", "386(慢) - 带有内存特权检查的386指令集" },
			{ "386_prefetch", "386(预取) - 使用预取队列模拟(仅限自动和普通核心) " },
			{ "486_slow", "486(慢) - 带有内存特权检查的486指令集" },
			{ "pentium_slow", "奔腾(慢速) - 带有内存特权检查的586指令集" },
		},
		"auto"
	},
	{
		"dosbox_pure_cpu_core",
		"系统 > 高级 > CPU内核",
		"使用的模拟方式(DOSBox CPU内核)",
		{
			#if defined(C_DYNAMIC_X86)
			{ "auto", "自动 - 真实模式的游戏使用普通, 受保护模式的游戏使用动态" },
			{ "dynamic", "动态 - 动态重新编译(快速, 使用dynamic_x86实现)" },
			#elif defined(C_DYNREC)
			{ "auto", "自动 - 真实模式的游戏使用普通, 受保护模式的游戏使用动态" },
			{ "dynamic", "动态 - 动态重新编译(快速, 使用动态重编译实现)" },
			#endif
			{ "normal", "普通 (解释器)" },
			{ "simple", "简化 (为旧实模式游戏优化的解释器)" },
		},
		#if defined(C_DYNAMIC_X86) || defined(C_DYNREC)
		"auto"
		#else
		"normal"
		#endif
	},
	{
		"dosbox_pure_menu_time",
		"系统 > 高级 > 开始菜单",
		"在启动游戏之前和之后设置开始菜单的行为." "\n"
		"还可以通过在选择重启时按住shift或L2/R2来强制打开." "\n\n", //end of System > Advanced section
		{
			{ "5", "开始时显示, 在自动开始的游戏退出后5秒关闭核心" },
			{ "3", "开始时显示, 在自动开始的游戏退出后3秒关闭核心" },
			{ "0", "开始时显示, 在自动开始的游戏退出后立即关闭核心" },
			{ "-1", "游戏开始或者退出后总是显示菜单, 忽略自动开始设定" },
		},
		"5"
	},

	// Audio
	{
		"dosbox_pure_audiorate",
		"音频 > 音频采样率(需要重新启动)",
		"这应与前端音频输出频率(Hz)设置匹配.",
		{
			{ "48000", NULL },
			{ "44100", NULL },
			#ifdef _3DS
			{ "32730", NULL },
			#endif
			{ "32000", NULL },
			{ "22050", NULL },
			{ "16000", NULL },
			{ "11025", NULL },
			{  "8000", NULL },
			{ "49716", NULL }, //for perfect OPL emulation
		},
		DBP_DEFAULT_SAMPLERATE_STRING
	},
	{
		"dosbox_pure_sblaster_conf",
		"音频 > SoundBlaster设置",
		"设置地址、中断、低8位和高16位DMA.",
		{
			// Some common (and less common) port, irq, low and high dma settings (based on a very scientific web search)
			{ "A220 I7 D1 H5",  "Port 0x220, IRQ 7, 8-Bit DMA 1, 16-bit DMA 5"  },
			{ "A220 I5 D1 H5",  "Port 0x220, IRQ 5, 8-Bit DMA 1, 16-bit DMA 5"  },
			{ "A240 I7 D1 H5",  "Port 0x240, IRQ 7, 8-Bit DMA 1, 16-bit DMA 5"  },
			{ "A240 I7 D3 H7",  "Port 0x240, IRQ 7, 8-Bit DMA 3, 16-bit DMA 7"  },
			{ "A240 I2 D3 H7",  "Port 0x240, IRQ 2, 8-Bit DMA 3, 16-bit DMA 7"  },
			{ "A240 I5 D3 H5",  "Port 0x240, IRQ 5, 8-Bit DMA 3, 16-bit DMA 5"  },
			{ "A240 I5 D1 H5",  "Port 0x240, IRQ 5, 8-Bit DMA 1, 16-bit DMA 5"  },
			{ "A240 I10 D3 H7", "Port 0x240, IRQ 10, 8-Bit DMA 3, 16-bit DMA 7" },
			{ "A280 I10 D0 H6", "Port 0x280, IRQ 10, 8-Bit DMA 0, 16-bit DMA 6" },
			{ "A210 I5 D1 H5",  "Port 0x210, IRQ 5, 8-Bit DMA 1, 16-bit DMA 5"  },
		},
		"A220 I7 D1 H5"
	},
	{
		"dosbox_pure_midi",
		"音频 > MIDI输出",
		"选择.SF2 波表文件, .ROM文件或用于MIDI输出的接口." "\n"
		"要添加SoundFonts或ROM文件, 请将它们复制到前端的'system'目录中." "\n"
		"要使用前端MIDI驱动程序, 请确保已正确设置." "\n\n", //end of Audio section
		{
			// dynamically filled in retro_init
		},
		"none"
	},
	{
		"dosbox_pure_sblaster_type",
		"音频 > 高级 > SoundBlaster类型",
		"模拟的SoundBlaster卡的类型.",
		{
			{ "sb16", "SoundBlaster 16 (默认)" },
			{ "sbpro2", "SoundBlaster Pro 2" },
			{ "sbpro1", "SoundBlaster Pro" },
			{ "sb2", "SoundBlaster 2.0" },
			{ "sb1", "SoundBlaster 1.0" },
			{ "gb", "GameBlaster" },
			{ "none", "无" },
		},
		"sb16"
	},
	{
		"dosbox_pure_sblaster_adlib_mode",
		"音频 > 高级 > SoundBlaster Adlib/FM 模式",
		"SoundBlaster模拟FM合成器模式. 除CMS之外所有模式均兼容Adlib.",
		{
			{ "auto",     "自动 (根据SoundBlaster类型选择) (默认)" },
			{ "cms",      "CMS (Creative Music System / GameBlaster)" },
			{ "opl2",     "OPL-2 (AdLib / OPL-2 / Yamaha 3812)" },
			{ "dualopl2", "Dual OPL-2 (Dual OPL-2 used by SoundBlaster Pro 1.0 for stereo sound)" },
			{ "opl3",     "OPL-3 (AdLib / OPL-3 / Yamaha YMF262)" },
			{ "opl3gold", "OPL-3 Gold (AdLib Gold / OPL-3 / Yamaha YMF262)" },
			{ "none",     "关闭" },
		},
		"auto"
	},
	{
		"dosbox_pure_sblaster_adlib_emu",
		"音频 > 高级 > SoundBlaster Adlib提供者",
		"Adlib仿真的提供者. 默认具有良好的质量和较低的性能要求.",
		{
			{ "default", "默认" },
			{ "nuked", "高品质Nuked OPL3" },
		},
		"default"
	},
	{
		"dosbox_pure_gus",
		"音频 > 高级 > 启用Gravis Ultrasound(需要重新启动)",
		"启用Gravis Ultrasound仿真. 设置固定在端口0x240, IRQ 5, DMA 3." "\n"
		"如果ULTRADIR变量需要不同于默认的'C:\\ULTRASND', 则需要在命令行或批处理文件中输入'SET ULTRADIR=...'." "\n\n", //end of Audio > Advanced section
		{ { "false", "关 (默认)" }, { "true", "开" } },
		"false"
	},

	{ NULL, NULL, NULL, {{0}}, NULL },
};
