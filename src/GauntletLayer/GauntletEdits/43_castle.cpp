#include "../GauntletLayer.hpp"

using namespace geode::prelude;

void RedesignedGauntletLayer::editCastleGauntlet() {
    auto director = CCDirector::sharedDirector();
    auto winSize = director->getWinSize();

    editGauntletSingle("Castle", ccc3(50, 67, 87), ccc3(190, 214, 230), ccc3(105, 119, 136));
    GameManager::get()->loadBackground(19);
    
    m_backgroundSprite->setTexture(CCTextureCache::sharedTextureCache()->textureForKey(GameManager::get()->getBGTexture(19)));

    // auto enableParticles = Mod::get()->getSettingValue<bool>("enable-background-particles");
	// if (enableParticles) {
	// 	auto bgParticleNode = CCParticleSystemQuad::create();
    //     if (bgParticleNode) {
    //         CCParticleSystemQuad* bgParticles = GameToolbox::particleFromString("50a-1a2a0.45a3a90a90a0a0a300a0a0a-403a0a0a0a0a10a5a-45a0a0.619608a0a1a0a0.996078a0a1a0.05a0a0a-45a0a0a0a0.545098a0a1a0a0.5a0.15a0a0a0.25a0a0a0a0a0a0a0a0a2a1a0a0a0a96a0a0a0a0a0a0a0a0a0a0a0a0a0a0", NULL, false);
    //         bgParticles->setPosition(ccp(winSize.width / 2, director->getScreenTop() + 10));
    //         bgParticles->setZOrder(-98);
    //         this->addChild(bgParticles);
    //     }
    // }
}