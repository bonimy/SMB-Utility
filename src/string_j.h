﻿/************************************************************************************

                                  smb Utility

  File: string_j.h
  Description:
  History:

 ************************************************************************************/
#ifndef STRING_J_H
#define STRING_J_H

#define PROGRAMNAME                         __T("SMB Utility")

#define STRING_VERSION_CONTRIBUTION         __T("Multi-6502 CPU emulator by Neil Bradley (neil@synthcom.com)")

#define STRING_NULL                         __T("")
#define STRING_UNKNOWN                      __T("不明")

#define STRING_LOGVIEW_FILESAVE             __T("%sに保存しました。")
#define STRING_LOGVIEW_FILEOPEN             __T("%sを開きました。")
#define STRING_LOGVIEW_LOADCHR              __T("%sから%.4xHﾊﾞｲﾄのCHRROMを読み込みました。")

 //ｳｲﾝﾄﾞｳのﾀｲﾄﾙ
 //
#define STRING_FILEOPENDIALOG_CHRLOAD       __T("ｷｬﾗｸﾀﾛﾑの読み込み")
#define STRING_WINDOW_EMULATOR              __T("ｴﾐｭﾚｰﾀ")
#define STRING_WINDOW_OBJLIST               __T("ｵﾌﾞｼﾞｪｸﾄ ﾘｽﾄ")
#define STRING_WINDOW_OBJVIEW               __T("ｵﾌﾞｼﾞｪｸﾄ ﾋﾞｭｰ")

//
#define STRING_OBJVIEW_TITLE                __T("%s <%dﾍﾟｰｼﾞ>")
#define STRING_OBJVIEW_TITLE2               __T("%s <%d-%dﾍﾟｰｼﾞ>")
#define STRING_OBJVIEW_TOOLTIP              __T("%d,(%d,%d) %s")

//ｽﾃｰﾀｽﾊﾞｰ
#define STRING_STATUSBAR_EMULOAD            __T("ﾛｰﾄﾞしました。")
#define STRING_STATUSBAR_EMUSAVE            __T("ｾｰﾌﾞされました。")
#define STRING_STATUSBAR_FILESAVE           __T("ﾌｧｲﾙに保存しました。")

//ﾌｧｲﾙｴﾗｰ
#define STRING_FILEERROR_SAVE               __T("上書き保存できません。")
#define STRING_FILEERROR_SAVEAS             __T("保存できません。")
#define STRING_FILEERROR_FILEFORMAT         __T("ﾌｧｲﾙの形式にｴﾗｰがあります。")
#define STRING_FILEERROR_NOTFOUND           __T("ﾌｧｲﾙが見つかりません。")

//ﾒｯｾｰｼﾞ
#define STRING_CONFIRM_SAVE                 __T("上書き保存しますか？")
#define STRING_CONFIRM_EXIT                 __T("変更を保存しますか？")
#define STRING_CONFIRM_RELOAD               __T("ﾌｧｲﾙが外部ｴﾃﾞｨﾀで更新されています。\n再ﾛｰﾄﾞしますか。（再ﾛｰﾄﾞすると、未保存の内容は失われます。）")
#define STRING_CONFIRM_DEMORECORD           __T("ﾃﾞﾓのﾚｺｰﾃﾞｨﾝｸﾞを開始します。")
#define STRING_CONFIRM_DEMORECORD2          __T("ﾃﾞﾓのﾚｺｰﾃﾞｨﾝｸﾞを終了しました。")
#define STRING_CONFIRM_UPDATEWORLD          __T("ﾜｰﾙﾄﾞの区分の更新を行います。")

//ｵﾌﾟｼｮﾝ ﾌﾟﾛﾊﾟﾃｲ ｼｰﾄ
#define STRING_OPTIONDIALOG_TITLE           __T("ｵﾌﾟｼｮﾝ")
#define STRING_OPTIONDIALOG_EMULATOR        __T("ｴﾐｭﾚｰﾀ")
#define STRING_OPTIONDIALOG_EDITOR          __T("ｴﾃﾞｨﾀ")
#define STRING_OPTIONDIALOG_APPLICATION     __T("ｱﾌﾟﾘｹｰｼｮﾝ")
#define STRING_OPTIONDIALOG_OBJECTVIEW      __T("ｵﾌﾞｼﾞｪｸﾄﾋﾞｭｰ")

//ﾂｰﾙﾁｯﾌﾟ
#define STRING_TOOLTIP_OPEN                 __T("開く")
#define STRING_TOOLTIP_SAVE                 __T("上書き保存")
#define STRING_TOOLTIP_ROOM                 __T("ﾙｰﾑの変更")
#define STRING_TOOLTIP_BADGUYS              __T("敵")
#define STRING_TOOLTIP_MAP                  __T("地形")
#define STRING_TOOLTIP_TESTPLAY             __T("ﾃｽﾄﾌﾟﾚｲ")
#define STRING_TOOLTIP_PAGETESTPLAY         __T("ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ")
#define STRING_TOOLTIP_HALFPOINTTESTPLAY    __T("途中ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ")
#define STRING_TOOLTIP_STOP                 __T("停止")
#define STRING_TOOLTIP_TESTPLAYSETTING      __T("ﾃｽﾄﾌﾟﾚｲの設定")

//#define STRING_TOOLTIP_ETC                __T("､その他")

// オブジェクトを送るダイアログ
#define STRING_SENDOBJECT_SRCERROR          __T("送り元のｵﾌﾞｼﾞｪｸﾄは、ﾍﾟｰｼﾞの関係に影響を与えるｵﾌﾞｼﾞｪｸﾄです。")
#define STRING_SENDOBJECT_DSTERROR          __T("送り先のﾍﾟｰｼﾞには、ｵﾌﾞｼﾞｪｸﾄがありません。")
#define STRING_SENDOBJECT_OVEROBJ           __T("送り先のﾙｰﾑには、これ以上ｵﾌﾞｼﾞｪｸﾄを送ることができません。")

#define STRING_UNDO_MENUTEXT                __T("元に戻す(&U) \"%s\"")
#define STRING_UNDONAME_KEYEDIT             __T("ｷｰﾎﾞ-ﾄﾞ入力")
#define STRING_UNDONAME_DLGEDIT             __T("ﾀﾞｲｱﾛｸﾞ入力")
#define STRING_UNDONAME_SENDOBJ             __T("ｵﾌﾞｼﾞｪｸﾄを送る")
#define STRING_UNDONAME_HEADDLG             __T("設定")
#define STRING_UNDONAME_CHRLOAD             __T("ｷｬﾗｸﾀﾛﾑの読み込み")
#define STRING_UNDONAME_TOOLSTR             __T("文字列の編集")
#define STRING_UNDONAME_TOOLLOOPBIN         __T("ﾙｰﾌﾟの編集(ﾊﾞｲﾅﾘ)")
#define STRING_UNDONAME_TOOLWORLD           __T("ﾜｰﾙﾄﾞの区分の自動更新")
#define STRING_UNDONAME_TOOLAREAROOM        __T("ｴﾘｱの開始ﾙｰﾑの編集")
#define STRING_UNDONAME_TOOLDEMORECORDER    __T("ﾃﾞﾓ ﾚｺｰﾀﾞｰ")
#define STRING_UNDONAME_TOOLOTHER           __T("その他の設定")

//#define STRING_UNDONAME_TOOLGLOBAL        __T("全般の設定")

#define STRING_POLEGFX_DEFAULT              __T("ﾃﾞﾌｫﾙﾄ")
#define STRING_POLEGFX_ROPE                 __T("ひも")
#define STRING_POLEGFX_TREE                 __T("木")
#define STRING_POLEGFX_OTHER                __T("その他")

#define STRING_SETTING_WORLDX               __T("ﾜｰﾙﾄﾞ%d")
#define STRING_SETTING_WARPZONE             __T("ﾜｰﾌﾟｿﾞｰﾝ")
#define STRING_SETTING_1UP                  __T("1UPｷﾉｺ")
#define STRING_SETTING_KOOPA                __T("ｸｯﾊﾟ")
#define STRING_SETTING_WORLD                __T("ﾜｰﾙﾄﾞ")
#define STRING_SETTING_OTHER                __T("その他")
#define STRING_SETTING_TITLE                __T("その他の設定")

#define STRING_STRINGDATA_01                __T("MARIO(ｽﾃｰﾀｽ)")
#define STRING_STRINGDATA_02                __T("MARIO(2P時のﾀｲﾑｱｯﾌﾟ)")
#define STRING_STRINGDATA_03                __T("MARIO(ｹﾞｰﾑｵｰﾊﾞｰ時)")
#define STRING_STRINGDATA_04                __T("LUIGI(ｽﾃｰﾀｽ表示/2P時のﾀｲﾑｱｯﾌﾟ/ｹﾞｰﾑｵｰﾊﾞｰ)")
#define STRING_STRINGDATA_05                __T("WORLD  TIME(ｽﾃｰﾀｽ)")
#define STRING_STRINGDATA_06                __T("WORLD(ｲﾝﾄﾛ画面)")
#define STRING_STRINGDATA_07                __T("TIME UP")
#define STRING_STRINGDATA_08                __T("GAME OVER")
#define STRING_STRINGDATA_09                __T("WELCOME TO WARP ZONE!")
#define STRING_STRINGDATA_10                __T("THANK YOU MARIO!")
#define STRING_STRINGDATA_11                __T("THANK YOU LUIGI!")
#define STRING_STRINGDATA_12                __T("BUT OUR PRINCESS IS IN")
#define STRING_STRINGDATA_13                __T("ANOTHER CASTLE!")
#define STRING_STRINGDATA_14                __T("YOUR QUEST IS OVER.")
#define STRING_STRINGDATA_15                __T("WE PRESENT YOU A NEW QUEST.")
#define STRING_STRINGDATA_16                __T("PUSH BUTTON B")
#define STRING_STRINGDATA_17                __T("TO SELECT A WORLD")
#define STRING_STRINGDATA_18                __T("著作権表示(ﾀｲﾄﾙ画面)")
#define STRING_STRINGDATA_19                __T("1 PLAYER GAME(ﾀｲﾄﾙ画面)")
#define STRING_STRINGDATA_20                __T("2 PLAYER GAME(ﾀｲﾄﾙ画面)")

#define STRING_TESTPLAYSETTING_MARIO        __T("ﾏﾘｵ")
#define STRING_TESTPLAYSETTING_SUPERMARIO   __T("ｽｰﾊﾟｰﾏﾘｵ")
#define STRING_TESTPLAYSETTING_FIREMARIO    __T("ﾌｧｲｱｰﾏﾘｵ")
#define STRING_TESTPLAYSETTING_NONE         __T("無効")
#define STRING_TESTPLAYSETTING_POS          __T("位置")
#define STRING_TESTPLAYSETTING_DOT          __T("ﾄﾞｯﾄ")

#define STRING_EMULATOROPTION_JOYSTICK      __T("ｼﾞｮｲｽﾃｨｯｸ")

#define STRING_KEYCONFIG_EMU_A              __T("Aﾎﾞﾀﾝ")
#define STRING_KEYCONFIG_EMU_B              __T("Bﾎﾞﾀﾝ")
#define STRING_KEYCONFIG_EMU_SELECT         __T("ｾﾚｸﾄﾎﾞﾀﾝ")
#define STRING_KEYCONFIG_EMU_START          __T("ｽﾀｰﾄﾎﾞﾀﾝ")
#define STRING_KEYCONFIG_EMU_UP             __T("上")
#define STRING_KEYCONFIG_EMU_DOWN           __T("下")
#define STRING_KEYCONFIG_EMU_LEFT           __T("左")
#define STRING_KEYCONFIG_EMU_RIGHT          __T("右")
#define STRING_KEYCONFIG_EDIT_ADD1          __T("種類を+1")
#define STRING_KEYCONFIG_EDIT_DEC1          __T("種類を-1")
#define STRING_KEYCONFIG_EDIT_ADD16         __T("種類を+16")
#define STRING_KEYCONFIG_EDIT_DEC16         __T("種類を-16")
#define STRING_KEYCONFIG_EDIT_UP            __T("位置を上へ")
#define STRING_KEYCONFIG_EDIT_DOWN          __T("位置を下へ")
#define STRING_KEYCONFIG_EDIT_LEFT          __T("位置を左へ")
#define STRING_KEYCONFIG_EDIT_RIGHT         __T("位置を右へ")
#define STRING_KEYCONFIG_EDIT_NEXTPAGE      __T("次のﾍﾟｰｼﾞへ")
#define STRING_KEYCONFIG_EDIT_PREVPAGE      __T("前のﾍﾟｰｼﾞへ")
#define STRING_KEYCONFIG_EDIT_NEXTOBJ       __T("次のｵﾌﾞｼﾞｪｸﾄへ")
#define STRING_KEYCONFIG_EDIT_PREVOBJ       __T("前のｵﾌﾞｼﾞｪｸﾄへ")
#define STRING_KEYCONFIG_EDIT_SAVEFILE      __T("ﾌｧｲﾙ: 上書き保存")
#define STRING_KEYCONFIG_EDIT_UNDO          __T("編集: 元に戻す")
#define STRING_KEYCONFIG_EDIT_ROOM          __T("編集: ﾙｰﾑを開く")
#define STRING_KEYCONFIG_EDIT_BADGUYS       __T("編集: 敵")
#define STRING_KEYCONFIG_EDIT_MAP           __T("編集: 地形")
#define STRING_KEYCONFIG_EDIT_TESTPLAY      __T("ｴﾐｭﾚｰﾀ: ﾃｽﾄﾌﾟﾚｲ")
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY  __T("ｴﾐｭﾚｰﾀ: ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ")
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY2 __T("ｴﾐｭﾚｰﾀ: 途中ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ")
#define STRING_KEYCONFIG_EDIT_STOP          __T("ｴﾐｭﾚｰﾀ: 停止")
#define STRING_KEYCONFIG_EDIT_SAVEEMU       __T("ｴﾐｭﾚｰﾀ: ｾｰﾌﾞ")
#define STRING_KEYCONFIG_EDIT_LOADEMU       __T("ｴﾐｭﾚｰﾀ: ﾛｰﾄﾞ")
#define STRING_KEYCONFIG_EDIT_EMUSETTING    __T("ｴﾐｭﾚｰﾀ: ﾃｽﾄﾌﾟﾚｲの設定")
#define STRING_KEYCONFIG_EDIT_NEXTWIN       __T("ｳｲﾝﾄﾞｳ: 次へ")
#define STRING_KEYCONFIG_EDIT_PREVWIN       __T("ｳｲﾝﾄﾞｳ: 前へ")
#define STRING_KEYCONFIG_KEYACCEL           __T("ｷｰﾎﾞｰﾄﾞｱｸｾﾗﾚｰﾀ")
#define STRING_KEYCONFIG_EMULATOR           __T("ｴﾐｭﾚｰﾀ")
#define STRING_KEYCONFIG_OVERLAPPED         __T("%sの\"%s\"と重複しています。")
#define STRING_KEYCONFIG_INITIALIZE         __T("ﾌﾟﾘｾｯﾄｷｰをﾛｰﾄﾞします。よろしいですか?")
#define STRING_KEYCONFIG_NOTIFY             __T("次回の起動から有効になります。")

#define STRING_KEYCONFIG_PRESET_DESKTOP     __T("ﾃﾞｽｸﾄｯﾌﾟ(ﾃﾝｷｰ編集)")
#define STRING_KEYCONFIG_PRESET_NOTE        __T("ﾉｰﾄ(文字ｷｰ編集)")

#define STRING_KEYCONFIG_WHEEL_NONE         __T("なし")
#define STRING_KEYCONFIG_WHEEL_SHIFT        __T("+ｼﾌﾄ")
#define STRING_KEYCONFIG_WHEEL_CTRL         __T("+ｺﾝﾄﾛｰﾙ")
#define STRING_KEYCONFIG_WHEEL_SHIFTCTRL    __T("+ｼﾌﾄ+ｺﾝﾄﾛｰﾙ")
#define STRING_KEYCONFIG_WHEEL_TYPE1        __T("種類を増減1")
#define STRING_KEYCONFIG_WHEEL_TYPE16       __T("種類を増減16")
#define STRING_KEYCONFIG_WHEEL_PAGE         __T("ﾍﾟｰｼﾞごとの移動")
#define STRING_KEYCONFIG_WHEEL_OBJ          __T("ｵﾌﾞｼﾞｪｸﾄごとの移動")

#define STRING_KEYCONFIG_BUTTONX            __T("ﾎﾞﾀﾝ%d")

#define STRING_OBJLIST_LENNAME              __T("長さ%dの%s")
#define STRING_OBJLIST_UNKNOWN              __T("不明なｵﾌﾞｼﾞｪｸﾄ")
#define STRING_OBJLIST_CRASH                __T("*暴走")
#define STRING_OBJLIST_BACK                 __T("背景:%s")
#define STRING_OBJLIST_VIEWBLOCK            __T("景色:%s ﾌﾞﾛｯｸ:%s")
#define STRING_OBJLIST_ROPE                 __T("縦位置0、長さ13のリフトの縦ロープ")
#define STRING_OBJLIST_LENCASTLE            __T("長さ%dの城")
#define STRING_OBJLIST_STEP                 __T("幅%d・高さ%dの階段")
#define STRING_OBJLIST_STEP98               __T("幅9・高さ8の階段")
#define STRING_OBJLIST_STEP98_2             __T("*幅9・高さ8の階段")
#define STRING_OBJLIST_NONE                 __T("*無し")

#define STRING_OBJLIST_ROOM                 __T("ﾙｰﾑ間移動の命令[%.2xH(%s),w=%d,p=%d]")
#define STRING_OBJLIST_PAGECOMMAND          __T("ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞ : %.2d")
#define STRING_OBJLIST_HARD                 __T("（5-3以降出現）")

#define STRING_AREASORT_TITLE               __T("ｴﾘｱの開始ﾙｰﾑの指定")

#define STRING_SEA                          __T("海")
#define STRING_SKY                          __T("地上")
#define STRING_UNDERGROUND                  __T("地下")
#define STRING_CASTLE                       __T("城")

#define STRING_OBJLIST_COLUMN_BIN           __T("ﾊﾞｲﾅﾘ")
#define STRING_OBJLIST_COLUMN_PAGE          __T("ﾍﾟｰｼﾞ")
#define STRING_OBJLIST_COLUMN_POS           __T("位置")
#define STRING_OBJLIST_COLUMN_TYPE          __T("種類")

#define STRING_OBJDATA_MAP_B_01             __T("?ﾌﾞﾛｯｸ(ﾊﾟﾜｰｷﾉｺ)")
#define STRING_OBJDATA_MAP_B_02             __T("?ﾌﾞﾛｯｸ(ｺｲﾝ1枚)")
#define STRING_OBJDATA_MAP_B_03             __T("隠れﾌﾞﾛｯｸ(ｺｲﾝ1枚)")
#define STRING_OBJDATA_MAP_B_04             __T("隠れﾌﾞﾛｯｸ(1UPｷﾉｺ)")
#define STRING_OBJDATA_MAP_B_05             __T("ﾚﾝｶﾞﾌﾞﾛｯｸ(ﾊﾟﾜｰｷﾉｺ)")
#define STRING_OBJDATA_MAP_B_06             __T("ﾚﾝｶﾞﾌﾞﾛｯｸ(豆の木)")
#define STRING_OBJDATA_MAP_B_07             __T("ﾚﾝｶﾞﾌﾞﾛｯｸ(ｽﾀｰ)")
#define STRING_OBJDATA_MAP_B_08             __T("ﾚﾝｶﾞﾌﾞﾛｯｸ(10ｺｲﾝ)")
#define STRING_OBJDATA_MAP_B_09             __T("ﾚﾝｶﾞﾌﾞﾛｯｸ(1UPｷﾉｺ)")
#define STRING_OBJDATA_MAP_B_10             __T("横から入る土管")
#define STRING_OBJDATA_MAP_B_11             __T("使用済みﾌﾞﾛｯｸ")
#define STRING_OBJDATA_MAP_B_12             __T("ｼﾞｬﾝﾌﾟ台")
#define STRING_OBJDATA_MAP_B_13             __T("逆L字型土管")
#define STRING_OBJDATA_MAP_B_14             __T("ﾎﾟｰﾙ")
#define STRING_OBJDATA_MAP_B_15             __T("*無し")
#define STRING_OBJDATA_MAP_B_16             __T("*無し")
#define STRING_OBJDATA_MAP_B_17             __T("ｱｽﾚﾁｯｸ台(砲台)")
#define STRING_OBJDATA_MAP_B_18             __T("横にならんだﾚﾝｶﾞﾌﾞﾛｯｸ(海草)")
#define STRING_OBJDATA_MAP_B_19             __T("横にならんだ壊せないﾌﾞﾛｯｸ")
#define STRING_OBJDATA_MAP_B_20             __T("横にならんだｺｲﾝ列")
#define STRING_OBJDATA_MAP_B_21             __T("縦にならんだﾚﾝｶﾞﾌﾞﾛｯｸ(海草)")
#define STRING_OBJDATA_MAP_B_22             __T("縦にならんだ壊せないﾌﾞﾛｯｸ")
#define STRING_OBJDATA_MAP_B_23             __T("入れない土管")
#define STRING_OBJDATA_MAP_B_24             __T("入れる土管")

#define STRING_OBJDATA_HELP_B12             __T("ｷｬﾗｸﾀの１つ。ｷｬﾗｸﾀｵｰﾊﾞｰで表示されなくなると、ﾏﾘｵが挟まって出れなくなるので注意。")
#define STRING_OBJDATA_HELP_B13             __T("高さ9固定。横からでも上からでも入れる。(横位置＋2)から2ｷｬﾗ分は、先に指定された障害物を消す。")
#define STRING_OBJDATA_HELP_B14             __T("やたらと使用しないこと。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。")
#define STRING_OBJDATA_HELP_B23             __T("長さを1にしても必ず2になる。")

//#define STRING_OBJDATA_HELP_B24           __T("長さを1にしても必ず2になる。")

#define STRING_OBJDATA_MAP_C_01             __T("穴")
#define STRING_OBJDATA_MAP_C_02             __T("天秤ﾘﾌﾄの横ﾛｰﾌﾟ")
#define STRING_OBJDATA_MAP_C_03             __T("吊り橋(縦位置7)")
#define STRING_OBJDATA_MAP_C_04             __T("吊り橋(縦位置8)")
#define STRING_OBJDATA_MAP_C_05             __T("吊り橋(縦位置10)")
#define STRING_OBJDATA_MAP_C_06             __T("海（縦位置10)")
#define STRING_OBJDATA_MAP_C_07             __T("横に並んだ?ﾌﾞﾛｯｸ(ｺｲﾝ、縦位置3)")
#define STRING_OBJDATA_MAP_C_08             __T("横に並んだ?ﾌﾞﾛｯｸ(ｺｲﾝ、縦位置7)")

#define STRING_OBJDATA_HELP_C01             __T("縦位置8から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。")
#define STRING_OBJDATA_HELP_C02             __T("縦位置0固定")
#define STRING_OBJDATA_HELP_C06             __T("縦位置10から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。")

#define STRING_OBJDATA_MAP_D_01             __T("ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞ")
#define STRING_OBJDATA_MAP_D_02             __T("逆L字型土管")
#define STRING_OBJDATA_MAP_D_03             __T("ﾎﾟｰﾙ")
#define STRING_OBJDATA_MAP_D_04             __T("ﾊﾝﾏｰ")
#define STRING_OBJDATA_MAP_D_05             __T("斜めのﾛｰﾌﾟ")
#define STRING_OBJDATA_MAP_D_06             __T("ｸｯﾊﾟの橋")
#define STRING_OBJDATA_MAP_D_07             __T("画面ｽｸﾛｰﾙをとめる(ﾜｰﾌﾟｿﾞ-ﾝ)")
#define STRING_OBJDATA_MAP_D_08             __T("画面ｽｸﾛｰﾙをとめる")

//#define STRING_OBJDATA_MAP_D_09           __T("画面ｽｸﾛｰﾙをとめる")
#define STRING_OBJDATA_MAP_D_10             __T("赤いﾌﾟｸﾌﾟｸ(空飛び)")
#define STRING_OBJDATA_MAP_D_11             __T("ｷﾗｰ(ﾌﾟｸﾌﾟｸ)連続")
#define STRING_OBJDATA_MAP_D_12             __T("連続出現ｷｬﾗを出なくする")
#define STRING_OBJDATA_MAP_D_13             __T("ﾙｰﾌﾟｺﾏﾝﾄﾞ")
#define STRING_OBJDATA_MAP_D_14             __T("?")
#define STRING_OBJDATA_MAP_D_15             __T("*暴走")

//#define STRING_OBJDATA_MAP_D_16           __T("*暴走")
//#define STRING_OBJDATA_MAP_D_17           __T("*暴走")

#define STRING_OBJDATA_HELP_D01             __T("指定ﾍﾟｰｼﾞまでﾏｯﾌﾟを送る。")
#define STRING_OBJDATA_HELP_D03             __T("やたらと使用しない事。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。")
#define STRING_OBJDATA_HELP_D04             __T("縦位置6固定、偶数ﾍﾟｰｼﾞに設置しないと橋が落ちない。")
#define STRING_OBJDATA_HELP_D05             __T("縦位置7固定")
#define STRING_OBJDATA_HELP_D06             __T("縦位置8、長さ13固定、偶数ﾍﾟｰｼﾞに設置しないと橋が落ちない。")
#define STRING_OBJDATA_HELP_D12             __T("連続出現ｷｬﾗを出した後、暴走を防ぐためにﾎﾟｰﾙを出す前に指定。")
#define STRING_OBJDATA_HELP_D13             __T("ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞとｾｯﾄでﾙｰﾌﾟを形成する。")

#define STRING_OBJDATA_MAP_E_01             __T("基本ﾌﾞﾛｯｸと景色の変更")
#define STRING_OBJDATA_MAP_E_02             __T("背景の変更")

#define STRING_OBJDATA_MAP_F_01             __T("ﾘﾌﾄの縦ﾛｰﾌﾟ")
#define STRING_OBJDATA_MAP_F_02             __T("天秤ﾘﾌﾄの縦ﾛｰﾌﾟ")
#define STRING_OBJDATA_MAP_F_03             __T("城")
#define STRING_OBJDATA_MAP_F_04             __T("幅n,高さnの階段")
#define STRING_OBJDATA_MAP_F_05             __T("幅9、高さ8の階段")
#define STRING_OBJDATA_MAP_F_06             __T("長い逆L字土管")
#define STRING_OBJDATA_MAP_F_07             __T("縦に並んだ丸ｷｬﾗ")
#define STRING_OBJDATA_MAP_F_08             __T("無し")

//#define STRING_OBJDATA_MAP_F_09           __T("無し")

#define STRING_OBJDATA_HELP_F01             __T("縦位置0、長さ13固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。")
#define STRING_OBJDATA_HELP_F02             __T("縦位置1固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。")
#define STRING_OBJDATA_HELP_F03             __T("やたらと使用しないこと。多く使用すると暴走しやすくなる。")
#define STRING_OBJDATA_HELP_F05             __T("長さを0以外に設定すると、後のｴﾘｱの表示がおかしくなります。")
#define STRING_OBJDATA_HELP_F07             __T("ﾂﾀのようにつかまって上下移動が可能。縦位置2固定")

#define STRING_OBJDATA_BB_01                __T("ﾌﾞﾛｯｸ無し")
#define STRING_OBJDATA_BB_02                __T("地面にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_03                __T("地面と天井にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_04                __T("地面と天井(3)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_05                __T("地面と天井(4)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_06                __T("地面と天井(8)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_07                __T("地面(4)と天井にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_08                __T("地面(4)と天井(3)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_09                __T("地面(4)と天井(4)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_10                __T("地面(5)と天井にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_11                __T("天井にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_12                __T("地面(5)と天井(4)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_13                __T("地面(8)と天井にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_14                __T("地面と天井とその間(5)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_15                __T("地面と天井とその間(4)にﾌﾞﾛｯｸ")
#define STRING_OBJDATA_BB_16                __T("すべてﾌﾞﾛｯｸ")

#define STRING_OBJDATA_T_01                 __T("無し")
#define STRING_OBJDATA_T_02                 __T("400")
#define STRING_OBJDATA_T_03                 __T("300")
#define STRING_OBJDATA_T_04                 __T("200")

#define STRING_OBJDATA_P_01                 __T("高さ-1、横位置1.5")
#define STRING_OBJDATA_P_02                 __T("ｴﾘｱの始まり：×。他ﾙｰﾑからの移動：高さ-1、横位置1.5")
#define STRING_OBJDATA_P_03                 __T("高さ10、横位置1.5")
#define STRING_OBJDATA_P_04                 __T("高さ4 、横位置1.5")

//#define STRING_OBJDATA_P_05               __T("高さ-1、横位置1.5")
//#define STRING_OBJDATA_P_06               __T("高さ-1、横位置1.5")
#define STRING_OBJDATA_P_07                 __T("高さ10、横位置1.5(自動歩行)")

//#define STRING_OBJDATA_P_08               __T("高さ10、横位置1.5(自動歩行)")

#define STRING_OBJDATA_BC_01                __T("青空")
#define STRING_OBJDATA_BC_02                __T("海")
#define STRING_OBJDATA_BC_03                __T("城壁")
#define STRING_OBJDATA_BC_04                __T("高さ11の川")
#define STRING_OBJDATA_BC_05                __T("夜")
#define STRING_OBJDATA_BC_06                __T("緑色の背景色(土管や山などを白に変更)")
#define STRING_OBJDATA_BC_07                __T("青い背景色を黒に、緑色の背景色を白に変更")
#define STRING_OBJDATA_BC_08                __T("青い背景色を黒に、緑色の背景色を白に、茶色を白に変更")

#define STRING_OBJDATA_MT_01                __T("緑色のｱｽﾚﾁｯｸ面")
#define STRING_OBJDATA_MT_02                __T("橙色のｱｽﾚﾁｯｸ面")
#define STRING_OBJDATA_MT_03                __T("大砲面")
#define STRING_OBJDATA_MT_04                __T("雲面")

#define STRING_OBJDATA_V_01                 __T("無し")
#define STRING_OBJDATA_V_02                 __T("空")
#define STRING_OBJDATA_V_03                 __T("山")
#define STRING_OBJDATA_V_04                 __T("柵のある庭")

#define STRING_OBJDATA_BADGUYS_01           __T("青いﾉｺﾉｺ")
#define STRING_OBJDATA_BADGUYS_02           __T("赤いﾉｺﾉｺ")
#define STRING_OBJDATA_BADGUYS_03           __T("ﾒｯﾄ")
#define STRING_OBJDATA_BADGUYS_04           __T("赤いﾉｺﾉｺ(往復)")
#define STRING_OBJDATA_BADGUYS_05           __T("青いﾉｺﾉｺ(停止)")
#define STRING_OBJDATA_BADGUYS_06           __T("ﾊﾝﾏｰﾌﾞﾛｽ")
#define STRING_OBJDATA_BADGUYS_07           __T("ｸﾘﾎﾞｰ")
#define STRING_OBJDATA_BADGUYS_08           __T("ｹﾞｯｿｰ")
#define STRING_OBJDATA_BADGUYS_09           __T("ｷﾗｰ")
#define STRING_OBJDATA_BADGUYS_10           __T("青いﾊﾟﾀﾊﾟﾀ(停止)")
#define STRING_OBJDATA_BADGUYS_11           __T("青いﾌﾟｸﾌﾟｸ(直進)")
#define STRING_OBJDATA_BADGUYS_12           __T("赤いﾌﾟｸﾌﾟｸ(直進)")
#define STRING_OBJDATA_BADGUYS_13           __T("ﾊﾞﾌﾞﾙ")
#define STRING_OBJDATA_BADGUYS_14           __T("ﾊﾟｯｸﾝﾌﾗﾜｰ")
#define STRING_OBJDATA_BADGUYS_15           __T("青いﾊﾟﾀﾊﾟﾀ(跳ねる)")
#define STRING_OBJDATA_BADGUYS_16           __T("赤いﾊﾟﾀﾊﾟﾀ(上下)")
#define STRING_OBJDATA_BADGUYS_17           __T("青いﾊﾟﾀﾊﾟﾀ(左右)")
#define STRING_OBJDATA_BADGUYS_18           __T("ｼﾞｭｹﾞﾑ")
#define STRING_OBJDATA_BADGUYS_19           __T("ﾄｹﾞｿﾞｰ(停止)")
#define STRING_OBJDATA_BADGUYS_20           __T("*ｶﾗｽみたいな赤いﾉｺﾉｺ")
#define STRING_OBJDATA_BADGUYS_21           __T("赤いﾌﾟｸﾌﾟｸ(空飛、連続)")
#define STRING_OBJDATA_BADGUYS_22           __T("ｸｯﾊﾟの炎")
#define STRING_OBJDATA_BADGUYS_23           __T("*暴走")
#define STRING_OBJDATA_BADGUYS_24           __T("ｷﾗｰ(ﾌﾟｸﾌﾟｸ)連続")
#define STRING_OBJDATA_BADGUYS_25           __T("*無し")

//#define STRING_OBJDATA_BADGUYS_26         __T("*無し")
//#define STRING_OBJDATA_BADGUYS_27         __T("*無し")
#define STRING_OBJDATA_BADGUYS_28           __T("ﾌｧｲｱｰﾊﾞｰ(右回転)")
#define STRING_OBJDATA_BADGUYS_29           __T("ﾌｧｲｱｰﾊﾞｰ(右高速回転)")
#define STRING_OBJDATA_BADGUYS_30           __T("ﾌｧｲｱｰﾊﾞｰ(左回転)")
#define STRING_OBJDATA_BADGUYS_31           __T("ﾌｧｲｱｰﾊﾞｰ(左高速回転)")
#define STRING_OBJDATA_BADGUYS_32           __T("ﾛﾝｸﾞﾌｧｲｱｰﾊﾞｰ（右回転)")
#define STRING_OBJDATA_BADGUYS_33           __T("ﾌｧｲｱｰﾊﾞｰ")

//#define STRING_OBJDATA_BADGUYS_34         __T("ﾌｧｲｱｰﾊﾞｰ")
//#define STRING_OBJDATA_BADGUYS_35         __T("ﾌｧｲｱｰﾊﾞｰ")
//#define STRING_OBJDATA_BADGUYS_36         __T("*無し")
#define STRING_OBJDATA_BADGUYS_37           __T("ﾘﾌﾄ(天秤)")
#define STRING_OBJDATA_BADGUYS_38           __T("ﾘﾌﾄ(上下)")
#define STRING_OBJDATA_BADGUYS_39           __T("ﾘﾌﾄ(上昇)")
#define STRING_OBJDATA_BADGUYS_40           __T("ﾘﾌﾄ(下降)")
#define STRING_OBJDATA_BADGUYS_41           __T("ﾘﾌﾄ(左右)")
#define STRING_OBJDATA_BADGUYS_42           __T("ﾘﾌﾄ(落下)")
#define STRING_OBJDATA_BADGUYS_43           __T("ﾘﾌﾄ(前進)")
#define STRING_OBJDATA_BADGUYS_44           __T("小さいﾘﾌﾄ(上昇)")
#define STRING_OBJDATA_BADGUYS_45           __T("小さいﾘﾌﾄ(下降)")
#define STRING_OBJDATA_BADGUYS_46           __T("ｸｯﾊﾟ")
#define STRING_OBJDATA_BADGUYS_47           __T("*生きているｷﾉｺ")
#define STRING_OBJDATA_BADGUYS_48           __T("*ｷﾉｺの出る音だけ")

//#define STRING_OBJDATA_BADGUYS_49         __T("*無し")
//#define STRING_OBJDATA_BADGUYS_50         __T("*無し")
#define STRING_OBJDATA_BADGUYS_51           __T("にせｼﾞｬﾝﾌﾟ台")

//#define STRING_OBJDATA_BADGUYS_52         __T("*無し")
#define STRING_OBJDATA_BADGUYS_53           __T("ﾜｰﾌﾟｿﾞｰﾝ")
#define STRING_OBJDATA_BADGUYS_54           __T("ｷﾉﾋﾟｵ(ﾋﾟｰﾁ姫)")

//#define STRING_OBJDATA_BADGUYS_55         __T("*暴走")
#define STRING_OBJDATA_BADGUYS_56           __T("2体のｸﾘﾎﾞｰ(縦位置10)")
#define STRING_OBJDATA_BADGUYS_57           __T("3体のｸﾘﾎﾞｰ(縦位置10)")
#define STRING_OBJDATA_BADGUYS_58           __T("2体のｸﾘﾎﾞｰ(縦位置6)")
#define STRING_OBJDATA_BADGUYS_59           __T("3体のｸﾘﾎﾞｰ(縦位置6)")
#define STRING_OBJDATA_BADGUYS_60           __T("2体の青いﾉｺﾉｺ(縦位置10)")
#define STRING_OBJDATA_BADGUYS_61           __T("3体の青いﾉｺﾉｺ(縦位置10)")
#define STRING_OBJDATA_BADGUYS_62           __T("2体の青いﾉｺﾉｺ(縦位置6)")
#define STRING_OBJDATA_BADGUYS_63           __T("3体の青いﾉｺﾉｺ(縦位置6)")

//#define STRING_OBJDATA_BADGUYS_64         __T("*無し")

// delreg.exe
#define STRING_DELREG_TITLE                 __T("SMB Utility ﾚｼﾞｽﾄﾘの削除")
#define STRING_DELREG_CONFIRM               __T("SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しますか？")
#define STRING_DELREG_COMPLETE              __T("SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しました。")
#define STRING_DELREG_ERROR_01              __T("SMB Utilityのﾚｼﾞｽﾄﾘのｷｰは、存在しません。")

#endif
