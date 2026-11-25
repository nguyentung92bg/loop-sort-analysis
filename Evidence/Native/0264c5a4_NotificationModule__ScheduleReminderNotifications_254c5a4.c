/* IL2CPP: NotificationModule$$ScheduleReminderNotifications
void NotificationModule__ScheduleReminderNotifications (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NotificationModule$$ScheduleReminderNotifications
   void NotificationModule__ScheduleReminderNotifications (const MethodInfo* method); */

void NotificationModule__ScheduleReminderNotifications_254c5a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_230 [208];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [208];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5fb0;
  if ((bRam0000000004f4c052 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049c8b70);
    FUN_021f03f8(PTR_DAT_049c8b78);
    bRam0000000004f4c052 = 1;
  }
  puVar2 = PTR_DAT_049c8b78;
  uStack_28 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
                    /* try { // try from 0264c618 to 0274c61f has its CatchHandler @ 0264c7c8 */
  uStack_160 = 0;
  uStack_158 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c8b70;
  uStack_28 = System_DateTime__get_Now_30dd928(0);
                    /* try { // try from 0264c638 to 0274c683 has its CatchHandler @ 0264c7cc */
  uVar3 = System_DateTime__AddHours_30dc11c(0x4038000000000000,&uStack_28,0);
  Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_120,uVar3,0,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  func_0x04608620(auStack_230,*(undefined8 *)(lVar4 + 0xb8),0xd0);
                    /* try { // try from 0264c684 to 0274c697 has its CatchHandler @ 0264c520 */
  uVar3 = *(undefined8 *)puVar1;
  uStack_38 = uStack_118;
  uStack_40 = uStack_120;
                    /* try { // try from 0264c698 to 0274c6ab has its CatchHandler @ 0264c7c4 */
  func_0x04608620(auStack_110,auStack_230,0xd0);
  Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
            (auStack_110,&uStack_40,uVar3);
                    /* try { // try from 0264c6b0 to 0274c6b7 has its CatchHandler @ 0264c7ac */
                    /* try { // try from 0264c6bc to 0274c6c3 has its CatchHandler @ 0264c7c0 */
  uVar3 = System_DateTime__AddHours_30dc11c(0x4048000000000000,&uStack_28,0);
  Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_130,uVar3,0,0);
                    /* try { // try from 0264c6dc to 0274c6df has its CatchHandler @ 0264c7a0 */
                    /* try { // try from 0264c6e0 to 0274c6f7 has its CatchHandler @ 0264c7a8 */
  func_0x04608620(auStack_110,*(long *)(*(long *)puVar2 + 0xb8) + 0xd0,0xd0);
  uStack_38 = uStack_128;
  uStack_40 = uStack_130;
  Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
            (auStack_110,&uStack_40,*(undefined8 *)puVar1);
                    /* try { // try from 0264c70c to 0274c713 has its CatchHandler @ 0264c7a4 */
  uVar3 = System_DateTime__AddDays_30dc0b0(0x401c000000000000,&uStack_28,0);
  Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_140,uVar3,0,0);
                    /* try { // try from 0264c728 to 0274c73b has its CatchHandler @ 0264c7bc */
                    /* try { // try from 0264c73c to 0274c78f has its CatchHandler @ 0264c520 */
  func_0x04608620(auStack_110,*(long *)(*(long *)puVar2 + 0xb8) + 0x1a0,0xd0);
  uStack_38 = uStack_138;
  uStack_40 = uStack_140;
  Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
            (auStack_110,&uStack_40,*(undefined8 *)puVar1);
  uVar3 = System_DateTime__AddDays_30dc0b0(0x402c000000000000,&uStack_28,0);
  Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_150,uVar3,0,0);
                    /* try { // try from 0264c790 to 0274c793 has its CatchHandler @ 0264c7b8 */
  func_0x04608620(auStack_110,*(long *)(*(long *)puVar2 + 0xb8) + 0x270,0xd0);
                    /* try { // try from 0264c794 to 0274c797 has its CatchHandler @ 0264c7b4 */
                    /* try { // try from 0264c798 to 0274c79b has its CatchHandler @ 0264c7b0 */
                    /* try { // try from 0264c79c to 0274c7e7 has its CatchHandler @ 0264c520 */
                    /* catch() { ... } // from try @ 0264c6dc with catch @ 0264c7a0 */
                    /* catch() { ... } // from try @ 0264c70c with catch @ 0264c7a4 */
  uStack_38 = uStack_148;
  uStack_40 = uStack_150;
                    /* catch() { ... } // from try @ 0264c6e0 with catch @ 0264c7a8 */
  Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
            (auStack_110,&uStack_40,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0264c6b0 with catch @ 0264c7ac */
                    /* catch() { ... } // from try @ 0264c798 with catch @ 0264c7b0 */
                    /* catch() { ... } // from try @ 0264c794 with catch @ 0264c7b4 */
                    /* catch() { ... } // from try @ 0264c790 with catch @ 0264c7b8 */
  uVar3 = System_DateTime__AddDays_30dc0b0(0x403e000000000000,&uStack_28,0);
                    /* catch() { ... } // from try @ 0264c728 with catch @ 0264c7bc */
                    /* catch() { ... } // from try @ 0264c6bc with catch @ 0264c7c0 */
                    /* catch() { ... } // from try @ 0264c698 with catch @ 0264c7c4 */
                    /* catch() { ... } // from try @ 0264c618 with catch @ 0264c7c8 */
                    /* catch() { ... } // from try @ 0264c638 with catch @ 0264c7cc */
  Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_160,uVar3,0,0);
  func_0x04608620(auStack_110,*(long *)(*(long *)puVar2 + 0xb8) + 0x340,0xd0);
                    /* try { // try from 0264c7e8 to 0274c7eb has its CatchHandler @ 0264c804 */
                    /* try { // try from 0264c7ec to 0274c807 has its CatchHandler @ 0264c520 */
  uStack_38 = uStack_158;
  uStack_40 = uStack_160;
  Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
            (auStack_110,&uStack_40,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 0264c7e8 with catch @ 0264c804 */
                    /* try { // try from 0264c808 to 0274c80f has its CatchHandler @ 0264c818 */
                    /* try { // try from 0264c810 to 0274c81b has its CatchHandler @ 0264c520 */
  return;
}

