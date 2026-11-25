// Namespace: 
public abstract class WorldCanvasBase : GameBehaviourBase, IStatefulView // TypeDefIndex: 5557
{
	// Fields
	[SerializeField]
	private StatefulComponent _statefulComponent; // 0xA0

	// Properties
	public StatefulComponent StatefulComponent { get; }

	// Methods

	// RVA: 0x2498530 Offset: 0x2494530 VA: 0x2498530
	public StatefulComponent get_StatefulComponent() { }

	// RVA: 0x2498538 Offset: 0x2494538 VA: 0x2498538
	public StatefulComponent GetInnerComponent(InnerComponentRole role) { }

	// RVA: 0x2498544 Offset: 0x2494544 VA: 0x2498544
	public StatefulComponent Get(InnerComponentRole role) { }

	// RVA: 0x2498550 Offset: 0x2494550 VA: 0x2498550
	public ContainerView GetContainer(ContainerRole role) { }

	// RVA: 0x2498574 Offset: 0x2494574 VA: 0x2498574
	public ContainerView Get(ContainerRole role) { }

	// RVA: 0x2498598 Offset: 0x2494598 VA: 0x2498598
	public Toggle GetToggle(ToggleRole role) { }

	// RVA: 0x24985BC Offset: 0x24945BC VA: 0x24985BC
	public Toggle Get(ToggleRole role) { }

	// RVA: 0x24985E0 Offset: 0x24945E0 VA: 0x24985E0
	public Slider GetSlider(SliderRole role) { }

	// RVA: 0x2498604 Offset: 0x2494604 VA: 0x2498604
	public Slider Get(SliderRole role) { }

	// RVA: 0x2498628 Offset: 0x2494628 VA: 0x2498628
	public Button GetButton(ButtonRole role) { }

	// RVA: 0x2498634 Offset: 0x2494634 VA: 0x2498634
	public Button Get(ButtonRole role) { }

	// RVA: 0x2498640 Offset: 0x2494640 VA: 0x2498640
	public GameObject GetObject(ObjectRole role) { }

	// RVA: 0x2498664 Offset: 0x2494664 VA: 0x2498664
	public GameObject Get(ObjectRole role) { }

	// RVA: 0x2498688 Offset: 0x2494688 VA: 0x2498688
	public Image GetImage(ImageRole role) { }

	// RVA: 0x2498694 Offset: 0x2494694 VA: 0x2498694
	public Image Get(ImageRole role) { }

	// RVA: 0x24986A0 Offset: 0x24946A0 VA: 0x24986A0
	public Animator GetAnimator(AnimatorRole role) { }

	// RVA: 0x24986C4 Offset: 0x24946C4 VA: 0x24986C4
	public VideoPlayer GetVideoPlayer(VideoPlayerRole role) { }

	// RVA: 0x24986E8 Offset: 0x24946E8 VA: 0x24986E8
	public VideoPlayer Get(VideoPlayerRole role) { }

	// RVA: 0x249870C Offset: 0x249470C VA: 0x249870C
	public TextReference GetText(TextRole role) { }

	// RVA: 0x2498718 Offset: 0x2494718 VA: 0x2498718
	public TextReference Get(TextRole role) { }

	// RVA: 0x2498724 Offset: 0x2494724 VA: 0x2498724
	public TextInputReference GetTextInput(TextInputRole role) { }

	// RVA: 0x2498730 Offset: 0x2494730 VA: 0x2498730
	public TextInputReference Get(TextInputRole role) { }

	// RVA: 0x249873C Offset: 0x249473C VA: 0x249873C
	public DropdownReference GetDropdown(DropdownRole role) { }

	// RVA: 0x2498748 Offset: 0x2494748 VA: 0x2498748
	public DropdownReference Get(DropdownRole role) { }

	// RVA: 0x2498754 Offset: 0x2494754 VA: 0x2498754
	public bool HasState(StateRole role) { }

	// RVA: 0x249876C Offset: 0x249476C VA: 0x249876C
	public float SetState(StateRole role) { }

	// RVA: 0x2498784 Offset: 0x2494784 VA: 0x2498784
	public bool HasAnimator(AnimatorRole role) { }

	// RVA: 0x2498790 Offset: 0x2494790 VA: 0x2498790
	public bool HasVideoPlayer(VideoPlayerRole role) { }

	// RVA: 0x249879C Offset: 0x249479C VA: 0x249879C
	public bool HasText(TextRole role) { }

	// RVA: 0x24987A8 Offset: 0x24947A8 VA: 0x24987A8
	public bool HasTextInput(TextInputRole role) { }

	// RVA: 0x24987B4 Offset: 0x24947B4 VA: 0x24987B4
	public bool HasDropdown(DropdownRole role) { }

	// RVA: 0x24987C0 Offset: 0x24947C0 VA: 0x24987C0
	public bool HasToggle(ToggleRole role) { }

	// RVA: 0x24987CC Offset: 0x24947CC VA: 0x24987CC
	public bool HasSlider(SliderRole role) { }

	// RVA: 0x24987D8 Offset: 0x24947D8 VA: 0x24987D8
	public bool HasButton(ButtonRole role) { }

	// RVA: 0x24987E4 Offset: 0x24947E4 VA: 0x24987E4
	public bool HasObject(ObjectRole role) { }

	// RVA: 0x24987F0 Offset: 0x24947F0 VA: 0x24987F0
	public bool HasImage(ImageRole role) { }

	// RVA: 0x24987FC Offset: 0x24947FC VA: 0x24987FC
	public bool HasContainer(ContainerRole role) { }

	// RVA: 0x2498808 Offset: 0x2494808 VA: 0x2498808
	public bool HasInnerComponent(InnerComponentRole role) { }

	// RVA: 0x2498814 Offset: 0x2494814 VA: 0x2498814
	public void SetText(TextRole role, string text) { }

	// RVA: 0x2498820 Offset: 0x2494820 VA: 0x2498820
	public void SetTextValues(TextRole role, string[] values) { }

	// RVA: 0x249882C Offset: 0x249482C VA: 0x249882C
	public void SetImage(ImageRole role, string spritePath) { }

	// RVA: 0x2498838 Offset: 0x2494838 VA: 0x2498838
	public void SetImage(ImageRole role, Sprite sprite) { }

	// RVA: 0x2498844 Offset: 0x2494844 VA: 0x2498844
	private void OnValidate() { }

	// RVA: 0x24988B0 Offset: 0x24948B0 VA: 0x24988B0
	protected void .ctor() { }
}

