// Namespace: 
public sealed class NotificationModule : ModuleBase, IProviderInitialize // TypeDefIndex: 5011
{
	// Fields
	private Nullable<Notification> _lastRespondedNotification; // 0x10
	private bool _respondRewardsClaimed; // 0xE8
	private readonly List<NotificationModule.RespondRewardArgs> _respondRewards; // 0xF0

	// Methods

	// RVA: 0x254C594 Offset: 0x2548594 VA: 0x254C594
	public void SetActive(bool isActive) { }

	[AsyncStateMachine(typeof(NotificationModule.<InitializeSdk>d__5))]
	// RVA: 0x254C814 Offset: 0x2548814 VA: 0x254C814 Slot: 4
	public UniTask InitializeSdk() { }

	// RVA: 0x254C5A4 Offset: 0x25485A4 VA: 0x254C5A4
	private static void ScheduleReminderNotifications() { }

	// RVA: 0x254C8B0 Offset: 0x25488B0 VA: 0x254C8B0
	private void HandleLastRespondedNotification() { }

	// RVA: 0x254CB00 Offset: 0x2548B00 VA: 0x254CB00
	public bool TryGetRespondRewards(out List<NotificationModule.RespondRewardArgs> respondRewards) { }

	// RVA: 0x254CB74 Offset: 0x2548B74 VA: 0x254CB74
	public void SetRespondRewardsClaimed() { }

	// RVA: 0x254CB80 Offset: 0x2548B80 VA: 0x254CB80
	public void .ctor() { }
}

